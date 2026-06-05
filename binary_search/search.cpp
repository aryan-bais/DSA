#include <iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,8,10};
    int start=0,end=4;
    int mid =( start+end)/2;
   int key=4;

 if(arr[mid]==key){
    cout<<"number get";
 }
 else if(arr[mid]<key){
    start=mid+1;
 }
 else{
    end=mid-1;
 }
 
 if(key){
    cout<<"number found";
 }

}

