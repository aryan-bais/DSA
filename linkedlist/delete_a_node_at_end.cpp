#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;

    node(int value){
        data=value;
        next=NULL;
    }

};

int main(){
node *head = NULL;
node *tail = NULL;

int arr[] = {1,2,3,4,5};

for(int i = 0; i < 5; i++)
{
    if(head == NULL)
    {
        head = new node(arr[i]);
        tail = head;
    }
    else
    {
        tail->next = new node(arr[i]);
        tail = tail->next;
    }
}
    
if(head == NULL)
{
    cout << "List is empty";
}
else if(head->next == NULL)
{
    node *temp = head;
    delete temp;
    head = NULL;
}
else
{
    node *curr = head;
    node *prev = NULL;

    while(curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = NULL;
    delete curr;
}
 node *temp = head;

while(temp != NULL)
{
    cout << temp->data << " ";
    temp = temp->next;
}
   }
