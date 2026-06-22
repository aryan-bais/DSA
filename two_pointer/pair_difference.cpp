#include<iostream>
using namespace std;
int main(){
    int n=5;
    int k=2;
    int arr[]={1,3,5,8,10};
    int left =0,right=n-1;

    while(left<right){
        if(arr[right]-arr[left]==k){
      
        cout << "Found";
        return 0; 
        
    }
    else if(arr[right]-arr[left]> k){
        right--;
    }
    else{
        left++;
    }
}
 cout << "Not Found";
    return 0;
}