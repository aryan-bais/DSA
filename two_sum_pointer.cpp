 #include<iostream>
 using namespace std;
 int main(){
    int arr[]={2,7,11,15,27};
    int n=5;
    int target=22;
  int left=0, right=n-1;
  while(left<right){
    if(arr[left]+arr[right]==target){
       cout<<left<<" "<<right;
       break;
    }
   else if(arr[left]+arr[right]<target){
    left++;
   }
   else{
    right--;
   }
    
  }
  return 0;
 
 }