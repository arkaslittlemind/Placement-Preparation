#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());


void Solve() {
    int n, k;
    cin >> n >> k;
    if (n < 2 * k - 1)
    {
        cout << n / 2 << "\n";
    }
    else if (n % k == 0)
    {
        cout << k / 2 << "\n";
    }
    else if ((n % k + k) % 2 == 0)
    {
        cout << (n % k + k) / 2 << "\n";
    }
    else if ((n % k + k) % 2 == 1)
    {
        if ((((n % k) + k) / 2 == k - 1))
        {
            cout << (k - 1) / 2 << "\n";
        }
        else
        {
            cout << ((n % k) + k) / 2 << "\n";
        }
    }
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
