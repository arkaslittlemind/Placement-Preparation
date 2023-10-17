#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int q;
    cin >> q;

    for(int i = 0; i < q; i++) {
        int m;
        cin >> m;

        int low = 0, high = n - 1;
        int count = 0;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(prices[mid] <= m) {
                count = mid + 1;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}