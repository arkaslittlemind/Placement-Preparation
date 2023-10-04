#include<bits/stdc++.h>
using namespace std;

int maximumHeight(vector<int> &trees, int height) {
    long long ans = 0;
    for(int i = 0; i < trees.size(); i++) {
        if(trees[i] > height) {
            ans += (trees[i] - height);
        }
    }
    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> trees(n);
    for(int i = 0; i < n; i++) {
        cin >> trees[i];
    }

    int low = 0, high = *max_element(trees.begin(), trees.end());
    while(low <= high) {
        long long mid = low + ((high - low) / 2);

        long long result = maximumHeight(trees, mid);
        if(result >= m) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << high << endl;
    return 0;
}