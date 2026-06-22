#include<iostream>
using namespace std;
int main(){
   int n=6;
    int arr[]={1,1,2,2,3,3};
    int i=0;
   for(int j=1;j<n;j++){
    if(arr[j]!=arr[i]){
        i++;
        arr[i]=arr[j];
    }
   }

      int unique = i + 1;

    cout << "Number of unique elements: " << unique << endl;


    for(int k = 0; k < unique; k++) {
        cout << arr[k] << " ";
    
}

}