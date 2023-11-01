#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

long long helper(long long n, long long m, long long x, long long y) {
    long long answer = max({(x - 1) * m,(m - y) * n,(n - x) * m,(y - 1) * n});
    return answer;
}

void Solve() {
    long long n, m;
    cin >> n >> m;

    long long x, y;
    cin >> x >> y;

    cout << helper(n, m, x, y) << endl;
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