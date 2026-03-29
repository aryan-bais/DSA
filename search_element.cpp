#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int element=30;

    for(int i=0;i<5;i++){
        if(arr[i]==element){
            cout<<"found at index "<<i;
            return 0;
        }
    }
  
    cout<<"not found";
}


