#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());


void Solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int z = 0, one = 0;
    int i1 = 0, i2 = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) {
            if (s[i] == '1') { z++; }
        } else {
            if (s[i] == '1') { one++; }
        }
    }
    bool ok1 = (z == one);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) {
            if (s[i] == '0') { i1++; }
        } else {
            if (s[i] == '0') { i2++; }
        }
    }
    bool ok2 = (i1 == i2);

    cout << ((ok1 || ok2) ? "Yes\n" : "No\n");
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
