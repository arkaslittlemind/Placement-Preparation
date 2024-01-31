#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int calculateLength(const string &s1, int n)
{
    int maxL = 1;
    int currL = 1;
    int start = 0;

    while (currL < n)
    {
        if (s1[currL] == s1[start])
        {
            maxL = max(maxL, currL - start + 1);
        }
        else
        {
            start = currL;
        }
        currL++;
    }
    return maxL;
}

void Solve()
{
    long long n, q;
    cin >> n >> q;

    string s1;
    cin >> s1;

    int res = calculateLength(s1, n);
    cout << res << " ";

    while (q--)
    {
        char c;
        cin >> c;
        s1 += c;

        res = calculateLength(s1, s1.length());
        cout << res << " ";
    }
    cout << endl;
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
