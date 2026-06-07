#include <iostream>
using namespace std;
int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    int target=3;
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans =n;


int start=0,end=n-1,mid;

while(start<=end){
    mid=start+(end-start)/2;
    if(arr[mid]==target){
        ans=mid;
        break;

    }

    else if(arr[mid]<target){
        start=mid+1;
    }

    else
    {
        ans=mid;
        end=mid-1;
    }

}

if(ans){
    cout<<"yes";
}

}