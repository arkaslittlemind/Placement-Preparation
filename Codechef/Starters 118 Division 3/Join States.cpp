#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int maxiState(int n, int m, vector<int>& pop) {
    int states = 0;
    int total = 0;

    for(int i = 0; i < n; i++) {
        total += pop[i];

        if(total >= m) {
            states++;
            total = 0;
        }
    }
    return states;
}




void Solve() {
    
    int n, m;
    cin >> n >> m;

    vector<int> pop(n);
    for(int i = 0; i < n; i++) {
        cin >> pop[i];
    }

    int res = maxiState(n, m, pop);

    cout << res << endl;

}

int32_t main() {
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--) {
        Solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}
