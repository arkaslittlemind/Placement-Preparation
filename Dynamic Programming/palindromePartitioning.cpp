#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(string str)
{
    int left = 0;
    int right = str.length() - 1;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int minCutsForPalindromes(string str)
{
    int n = str.length();
    vector<int> dp(n, 0);

    for (int i = 1; i < n; i++)
    {
        dp[i] = i; // Initialize with the worst-case scenario, i cuts.

        for (int j = 0; j <= i; j++)
        {
            if (isPalindrome(str.substr(j, i - j + 1)))
            {
                if (j == 0)
                {
                    dp[i] = 0; // If the whole substring is a palindrome, no cuts are needed.
                }
                else
                {
                    dp[i] = min(dp[i], dp[j - 1] + 1);
                }
            }
        }
    }

    return dp[n - 1];
}

int main()
{
    int T;
    cin >> T;
    cin.ignore(); // Consume the newline character after reading T.

    for (int tc = 1; tc <= T; tc++)
    {
        string str;
        getline(cin, str);

        int ans = minCutsForPalindromes(str);

        cout << "CASE #" << tc << ": " << ans << endl;
    }

    return 0;
}
