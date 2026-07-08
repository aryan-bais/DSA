#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int value){
        data=value;
        next=NULL;
    }
};

int main(){
    node*head,*tail;
    tail=head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
   
    
    if(head==NULL){

        head=new node(arr[i]);
        tail=head;
    }

    else{
 tail->next=new node(arr[i]);
 tail=tail->next;

    }
}
node*temp;
temp=head;

while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
}



}