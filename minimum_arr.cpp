#include<iostream>
using namespace std;
int main(){
 
 int arr[]={1,2,3,4,5,6};
 int min=arr[10];
 for(int i=0;i<6;i++){
    if(arr[i]<min)min=arr[i];
 }
 cout<<min;
}