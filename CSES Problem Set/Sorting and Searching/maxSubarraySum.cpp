#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    long long currentSum = 0;
    long long maxSum = INT_MIN;

    for(long long i = 0; i < n; i++) {
        currentSum += vec[i];
        maxSum = max(maxSum, currentSum);

        if(currentSum < 0) {
            currentSum = 0;
        }
    }
    cout << maxSum << endl;

    return 0;
}