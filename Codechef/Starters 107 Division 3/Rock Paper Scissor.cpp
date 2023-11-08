#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

pair<int, int> calculateScore(string chef, string chefina, long long n) {
    int s1 = 0, s2 = 0;

    for (int i = 0; i < n; i++) {
        if (chef[i] != chefina[i]) {
            if (chef[i] == 'R' && chefina[i] == 'S') s1++;

            else if (chef[i] == 'P' && chefina[i] == 'R') s1++;

            else if (chef[i] == 'S' && chefina[i] == 'P') s1++;

            else if (chef[i] == 'P' && chefina[i] == 'S') s2++;

            else if (chef[i] == 'R' && chefina[i] == 'P') s2++;

            else if (chef[i] == 'S' && chefina[i] == 'R') s2++;
        }
    }

    return make_pair(s1, s2);
}



void Solve() {
    long long n;
    cin >> n;

    string chef, chefina;
    cin >> chef >> chefina;

    pair<int, int> scores = calculateScore(chef, chefina, n);
    int s1 = scores.first, s2 = scores.second;

    int point;
    if (s2 >= s1) {
        point = (s1 + s2) / 2;
        point++;

        cout << point - s1 << endl;
    }

    else cout << "0" << endl;
    }

int32_t main() {
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        Solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}
