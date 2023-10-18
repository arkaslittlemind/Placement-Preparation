#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long calculateSum(const vector<long long>& vec) {
    long long sum = 0;
    for (long long element : vec) {
        sum += element;
    }
    return sum;
}

void Solve() {
    long long n, m;
    cin >> n >> m;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << arr[0] << " ";
    for (int i = 1; i < n; i++) {
        long long v = m / arr[i] * arr[i];
        while (gcd(v, arr[i - 1]) != arr[i]) {
            v -= arr[i];
        }
        cout << v << " ";
    }
    cout << endl;
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