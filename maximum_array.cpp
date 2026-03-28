#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,9,1,7};
    int max=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max)max=arr[i];
    }
    cout<<max;
}