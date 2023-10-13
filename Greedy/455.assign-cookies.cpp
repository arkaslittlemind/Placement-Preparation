/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int n = g.size();
        int m = s.size();
        int i = 0;
        for(int j = 0; i < n && j < m; j++) {
            if(g[i] <= s[j]) i++;
        }
        return i;
    }
};
// @lc code=end

