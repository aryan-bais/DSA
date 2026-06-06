#include <iostream>
using namespace std;
 int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int start=0,end=9;
    int mid=(start+end)/2;
    int key=7;

    if(arr[mid]==key){
        cout<<"number found in first step";
    }

    else if(arr[mid]<key){
        start=mid+1;
    }

    else{
        end=mid-1;
    }
    if(key){
        cout<<"find in next step";
    }
 }