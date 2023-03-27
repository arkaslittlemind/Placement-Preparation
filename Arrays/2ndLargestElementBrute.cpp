#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(int arr[], int n){
    sort (arr, arr+n);
    int largest = arr[n - 1];
    int secondLargest;
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] != largest){
            secondLargest = arr[i];
            break;
        }
        if(arr[0] == largest){
            return -1;
        }
    }
    return secondLargest;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << secondLargestElement(arr, n);
    return 0;
}