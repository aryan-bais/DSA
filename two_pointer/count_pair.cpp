#include<iostream>
using namespace std;
int main(){
     int n=6;
 int left=0,right=n-1;
 int count=0;
 int arr[]={1,2,3,4,5,6};

 int target=7;

 while(left<right){
  
    if(arr[left]+arr[right]==target){
        count++;
        left++;
        right--;
    }
    else if (arr[left]+arr[right]<target){
        left++;
    }
    else{
        right++;
    }
 }

 cout<<count<<endl;
 return 0;
}
