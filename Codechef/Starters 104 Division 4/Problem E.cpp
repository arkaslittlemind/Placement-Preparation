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

long long calculateSum(const vector<long long>& vec) {
    long long sum = 0;
    for (long long element : vec) {
        sum += element;
    }
    return sum;
}

void Solve() {
    long long n;
    cin >> n;

    vector<long long> vec(n);
    vector<pair<long long, long long>> v;

    for (long long i = 0; i < n; i++) {
        cin >> vec[i];
        v.push_back({vec[i], i});
    }

    sort(v.rbegin(), v.rend());

    long long mx = vec[0];

    for (long long i = 0; i < v[0].second; i++) {
        mx = max(mx, vec[i]);
        vec[i] = mx;
    }
    mx = vec[n - 1];
    for (long long i = n - 1; i > v[0].second; i--) {
        mx = max(mx, vec[i]);
        vec[i] = mx;
    }

    long long sum = calculateSum(vec);

    cout << sum << endl;
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