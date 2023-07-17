#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, sum = 0, element;
    cin >> n;

    for(int i = 0; i < n - 1; i++) {
        cin >> element;
        sum += element;
    }
    cout << (n * (n + 1) / 2) - sum;
    return 0;
}