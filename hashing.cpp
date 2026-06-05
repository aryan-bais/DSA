#include<bits/stdc++.h>
using namespace std;
int main(){

int n ;
cin>>n;
 int arr[n];

 for (int i=0;i<n;i++){
    cin >>arr[i];
  } 
int hash[13]={0};
 for(int i=0;i<n;i++){
    hash[arr[i]]+=1;
 }


int q;
cin>>q;
while(q--){
    int number;
    cin>>number;

    cout<<hash[number]<<endl;
}



    return 0;
}







--------------------------------------



#include<bits/stdc++.h>
using namespace std;
int main(){

    sting s;
    cin >>s;
    //pre computing

    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin >> c;
        //fetch

        cout<<hash[c -'a']<<endl;

    }
    return 0;


    }