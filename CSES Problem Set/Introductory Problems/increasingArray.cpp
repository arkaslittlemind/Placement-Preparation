#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());


void Solve() {
    lli n;
    cin >> n;

    vector<lli> arr(n);
    for(lli i = 0; i < n; i++) {
        cin >> arr[i];
    }

    lli count = 0; 
    for(lli i = 1; i < n; i++) {
        if(arr[i] <= arr[i - 1]) {
            count += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    cout << count << endl;
}


int32_t main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    //while (t--)
    //{
        //cout << "Case #" << i << ": ";
        Solve();
    //}
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}