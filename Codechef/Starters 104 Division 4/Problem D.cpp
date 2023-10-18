#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int gcd(int x, int y) {
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

int helper(int x, int y, int k) {
    if (x == y)
        return x + y;

    int mini = 1e9;

    if (k > 1000)
        k = 1000;

    while (k--) {
        int sum = 0;
        int value = gcd(x, y);
        if (x > y) {
            x = value;
        } else {
            y = value;
        }
        sum += value;

        int lcm = (x * y) / value;
        if (x > y) {
            x = lcm;
        } else {
            y = lcm;
        }
        sum += lcm;
        mini = min(mini, sum);
    }
    return mini;
}

void Solve() {
    long long x, y, k;
    cin >> x >> y >> k;

    int minSum = helper(x, y, k);
    cout << minSum << endl;
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