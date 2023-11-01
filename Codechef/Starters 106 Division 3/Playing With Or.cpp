#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

long long countOddBitwiseORSubarrays(vector<long long>& vec, long long N, long long K) {
    long long count = 0;
    
    for (int i = 0; i < N - K + 1; ++i) {
        bool bitwiseOR = false;
        for (int j = 0; j < K; ++j) {
            if(vec[i + j] % 2 == 1) {
                bitwiseOR = true;
                break;
            }
        }
        
        if (bitwiseOR) {
            count++;
        }
    }
    
    return count;
}

void Solve() {
    long long N, K;
    cin >> N >> K;

    vector<long long> vec(N);
    for (long long i = 0; i < N; ++i) {
        cin >> vec[i];
    }

    long long result = countOddBitwiseORSubarrays(vec, N, K);
    cout << result << endl;
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