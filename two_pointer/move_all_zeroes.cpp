#include<iostream>
using namespace std;

int main() {

    int arr[] = {0,1,0,3,12};
    int n = 5;

    int i = 0;

    for(int j = 0; j < n; j++) {

        if(arr[j] != 0) {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    for(int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}

