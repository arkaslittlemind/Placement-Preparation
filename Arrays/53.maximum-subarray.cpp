/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long currentSum = 0;
        long long maxSum = INT_MIN;
        long long n = nums.size();
        for(long long i = 0; i < n; i++) {
            currentSum += nums[i];
            maxSum = max(currentSum, maxSum);

            if(currentSum < 0) {
                currentSum = 0;
            }
        }
        return maxSum;
    }
};
// @lc code=end

