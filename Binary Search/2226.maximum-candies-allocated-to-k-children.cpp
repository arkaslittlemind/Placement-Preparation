/*
 * @lc app=leetcode id=2226 lang=cpp
 *
 * [2226] Maximum Candies Allocated to K Children
 */

// @lc code=start
class Solution {
    bool helper(vector<int> &candies, long long k, long long mid) {
        long long count = 0;
        for(int i = 0; i < candies.size(); i++) {
            count += (candies[i] / mid);

            if(count >= k) return true;
        }
        return false;
    }
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();
        int low = 1, high = *max_element(candies.begin(), candies.end());
        int ans = 0;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(helper(candies, k, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};
// @lc code=end

