#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 1) {
        cout << "1" << endl;
    }
    else if (n < 4) {
        cout << "NO SOLUTION" << endl;
    }
    else {
        vector<int> perm;
        for (int i = 2; i <= n; i += 2) {
            perm.push_back(i);
        }
        for (int i = 1; i <= n; i += 2) {
            perm.push_back(i);
        }
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                cout << " ";
            }
            cout << perm[i];
        }
        cout << endl;
    }
    return 0;
}