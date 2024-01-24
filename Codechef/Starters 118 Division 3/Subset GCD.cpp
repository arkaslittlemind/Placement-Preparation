#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

vector<int> findSet(int n, int k) {
    for(int i = n; i > 0; i--) {
        vector<int> mul;

        for(int j = i; j <= n; j += i) {
            mul.push_back(j);

            if(mul.size() == k) {
                return mul;
            }
        }
    }
    return vector<int>();
}



void Solve() {
    int n, k;
    cin >> n>> k;

    vector<int> set = findSet(n, k);

    for(int result : set) {
        cout << result << " ";
    }
    cout << endl;
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
