#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    // Step 1
    map<char, int> freq;
    for (char c : n) {
        freq[c]++;
    }

    // Step 2
    int oddCount = 0;
    char oddChar;
    for (auto p : freq) {
        if (p.second % 2 == 1) {
            oddCount++;
            oddChar = p.first;
        }
    }
    if (oddCount > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    // Step 3
    string evenChars, oddChars;
    for (auto p : freq) {
        if (p.second % 2 == 0) {
            evenChars += string(p.second / 2, p.first);
        } else {
            oddChars += string(p.second, p.first);
        }
    }

    // Step 4
    sort(evenChars.begin(), evenChars.end(), greater<char>());

    // Step 5
    cout << evenChars + oddChars + string(evenChars.rbegin(), evenChars.rend()) << "\n";

    return 0;
}
