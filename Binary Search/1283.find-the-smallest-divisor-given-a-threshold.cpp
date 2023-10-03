/*
 * @lc app=leetcode id=1283 lang=cpp
 *
 * [1283] Find the Smallest Divisor Given a Threshold
 */

// @lc code=start
class Solution {
private:
    int helper(vector<int> &nums, int divisor) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            ans += ceil((double)(nums[i]) / (double)(divisor));
        }
        return ans;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1, high = *max_element(nums.begin(), nums.end());

        while(low <= high) {
            int mid = low + (high - low) / 2;
            int res = helper(nums, mid);

            if(res <= threshold){
                high = mid - 1;
            }
            else {
                low = mid + 1;
            } 
        }
        return low;
    }
};
// @lc code=end

