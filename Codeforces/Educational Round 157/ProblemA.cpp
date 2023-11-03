#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        int time = ((y * k) + k - 1 + x - 2) / (x - 1) + k;
        cout << time << endl;
    }
    return 0;
}
