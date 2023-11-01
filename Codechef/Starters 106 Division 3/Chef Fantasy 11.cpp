#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N; 
        cin >> N;
        long long total_choices = static_cast<long long>(N) * (N - 1);
        cout << total_choices << endl;
    }

    return 0;
}
