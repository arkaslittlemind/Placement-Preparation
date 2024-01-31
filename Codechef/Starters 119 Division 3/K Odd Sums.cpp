#include <iostream>
#include <algorithm>
#include <numeric>
#include <set>
#include <queue>
#include <climits>
#include <deque>
#include <map>
#include <cmath>
#include <vector>
#include <cstring>
#include <iomanip>
#include <ctype.h>
#include <bitset>
#include <stack>
#include <sstream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define qi queue<int>
#define mii map<int, int>
#define pii pair<int, int>
#define mip map<int, pair<int, int>>
#define double long double
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define double long double
#define get(a)        \
    for (auto &i : a) \
    cin >> i
#define put(a)        \
    cout << endl;     \
    for (auto &i : a) \
    cout << i << " "
#define ps(x, y) fixed << setprecision(y) << x
#define endl "\n"
#define sp << " " <<
#define P(x) cout << x << endl
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; //
// find_by_order, order_of_key
const int mod = 1000000007;
const int INF = LLONG_MAX;
void solve()
{
    int n, k;
    cin >> n >> k;
    bool flag = true;
    vector<int> ans;
    for (int i = 0; i < k + 1; i++)
    {
        if (flag)
        {
            ans.push_back(1);
        }
        else
        {
            ans.push_back(0);
        }
        flag = !flag;
    }
    vector<int> even, odd;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }
    vector<int> temp;
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == 0)
        {
            temp.push_back(even.back());
            even.pop_back();
        }
        else
        {
            temp.push_back(odd.back());
            odd.pop_back();
        }
    }
    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i] % 2 == 0)
        {
            while (!even.empty())
            {
                cout << even.back() << " ";
                even.pop_back();
            }
            cout << temp[i] << " ";
        }
        else
        {
            while (!odd.empty())
            {
                cout << odd.back() << " ";
                odd.pop_back();
            }
            cout << temp[i] << " ";
        }
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i = 1;
    int t = 1;
    cin >> t;
    while (t--)
    {

        solve();
        cout << endl;
    }
    return 0;
}