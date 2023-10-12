#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());


bool isValid(int x, int y, int z) {
    return (x % 3 != 0) && (y % 3 != 0) && (z % 3 != 0);
}

void Solve() {
    long long n;
    cin >> n;

    for (int x = 1; x <= 10; x++) {
        for(int y = x + 1; y <= 10; y++) {
            int z = n - x - y;
            if(x % 3 != 0 && y % 3 != 0 && z % 3 != 0 && z > y) {
                cout << "YES" << endl;
                cout << x << " " << y << " " << z << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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