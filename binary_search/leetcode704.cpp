class Solution {
public:
    int search(vector<int>& arr, int answer) {
           int n = arr.size();
        int start=0,end=n-1,mid;
     
     
    while(start<=end)
    {
      mid=(start+end)/2;
        if (arr[mid]==answer)
            return mid;
        

        else if(arr[mid]<answer)
         start=mid+1;

      else
            end=mid-1;
        
     }
     return -1;

    }
};