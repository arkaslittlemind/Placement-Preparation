#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        v.push_back(1);
        for (int i = 1; i < n; i++)
            v.push_back(v.back() + 3);
        for (auto &it : v)
            cout << it < " ";
        cout << endl;
    }
    return 0;
}