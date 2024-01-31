#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int minWasteCookies(const vector<int> &cookies, int k)
{
    int minWaste = INT_MAX;
    for (int curr : cookies)
    {
        if (curr == k || curr % k == 0)
        {
            return 0;
        }
        if (curr > k)
        {
            minWaste = min(minWaste, min(curr % k, curr % (2 * k)));
        }
    }
    return (minWaste == INT_MAX ? -1 : minWaste);
}

void Solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> cookies(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cookies[i];
    }

    sort(cookies.begin(), cookies.end());

    int minWaste = minWasteCookies(cookies, k);
    cout << minWaste << endl;
}

int32_t main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    // int pairCount = 0;
    while (t--)
    {
        Solve();
        // pairCount++;
    }

    // cout << pairCount << endl;
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}
