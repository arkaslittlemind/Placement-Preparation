#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

// 0 = didn't like
// 1 = liked

bool qualifiesOrNot(vector<int> &resp)
{
    int likes = 0;
    for (int response : resp)
    {
        if (response == 1)
        {
            likes++;
        }
    }
    return likes >= 4;
}

void Solve()
{

    vector<int> resp(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> resp[i];
    }

    if (qualifiesOrNot(resp))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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
