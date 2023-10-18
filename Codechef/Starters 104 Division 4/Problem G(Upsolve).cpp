#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve() {
    long long n, m;
    cin >> n >> m;

    vector<long long> arr(n);
    for(auto &it: arr) {
        cin >> it;
    }
    
    while(!arr.empty()) {
        vector<long long> visited(n + 5, 0);
        long long freq = 0;
        for(auto it : arr) {
            if(!visited[it]) {
                cout << it << " ";
                freq++;
            }
            visited[it] = 1;
        }
        while(freq--) {
            arr.erase(arr.begin());
        }
    }
    cout << nline;
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