#include <bits/stdc++.h> 
using namespace std;

#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<vector<ll>> l(k), r(k);

    for (auto &i : l)
        for (auto &si : i)
            cin >> si;

    for (auto &i : r)
        for (auto &si : i)
            cin >> si;

    ll q;
    cin >> q;

    vector<vector<ll>> v(k);

    for (ll i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        x = -x;

        ll j = lower_bound(r.begin(), r.end(), x) - r.begin();
        v[j].push_back(max(x, l[j] + r[j] - x));
    }

    for (ll i = 0; i < k; i++)
    {
        ll L = l[i], R = r[i];
        vector<ll> &t = v[i];

        sort(t.begin(), t.end());
        ll pt = t.size();

        while (L < R)
        {
            while (pt >= 1 && t[pt - 1] == R)
                pt--;

            if ((t.size() - pt) & 1)
                swap(s[L], s[R]);

            L++;
            R--;
        }
    }

    cout << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
