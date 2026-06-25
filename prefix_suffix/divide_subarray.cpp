#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    int arr[]={2,2,3,6,1};
     int n = sizeof(arr) / sizeof(arr[0]);

    int total_sum=0,prefix=0;
    for(int i=0;i<n;i++)
    total_sum+=arr[i];

    bool found=false;

    for(int i=0;i<n-1;i++){
        prefix+=arr[i];
        if(total_sum-prefix==prefix){
            found=true;
            break;
        }
       
    }


    
   if (found)
        cout << "found";
    else
        cout << "not found";

    return 0;
}