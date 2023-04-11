#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> arr, int n){
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i <= n; i++){
        sum1 += i;
    }
    for(int i = 0; i < n - 1; i++){
        sum2 += arr[i];
    }
    return sum1 - sum2;
}

int main () {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Missing number is: " << missingNumber(arr, n);
    return 0;
}