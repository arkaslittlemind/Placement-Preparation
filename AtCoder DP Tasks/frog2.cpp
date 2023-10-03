#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int h[N];
int dp[N];

int costFinder(int i) {
    
    // base case
    if(i == 0) return 0;
    if(dp[i] != -1) return dp[i];
    // way 1
    int cost = INT_MAX;
    cost = min(cost, costFinder(i-1) + abs(h[i] - h[i-k]));

    // way 2
    if(i > 1)
        cost = min(cost, costFinder(i-2) + abs(h[i] - h[i-k]));

    return dp[i] = cost;
}


int main() {
    memset(dp, -1, sizeof(dp));
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }

    cout << costFinder(n-1) << endl;
}