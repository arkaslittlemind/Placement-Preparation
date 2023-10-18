#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

bool isPossible(vector<int> &chocolates, int n, int k) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += chocolates[i];
    }
    if(sum / n >= 1 && sum / n <= k) {
        return true;
    }
    return false;
}


void Solve() {
    long long n, k;
    cin >> n >> k;

    vector<int> chocolates(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> chocolates[i];
    }
    int ans = isPossible(chocolates, n, k);
    if(ans) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
}


int32_t main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        //cout << "Case #" << i << ": ";
        Solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}