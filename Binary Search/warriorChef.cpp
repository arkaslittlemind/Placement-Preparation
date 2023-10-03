#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int sumArray(vector<int> &nums) {
    int n = nums.size();
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    return sum;
}

bool helperFunc(vector<int> &nums, long long h, long long count) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (nums[i] <= count)
            continue;
        else {
            if (h - nums[i] <= 0)
                return 0;
            else
                h -= nums[i];
        }
    }
    if (h > 0)
        return true;
    else
        return false;
}

void Solve() {
    int n, h;
    cin >> n >> h;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int low = 0, high = sumArray(nums);

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long res = helperFunc(nums, h, mid);
        if (res == 0) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << low << endl;
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