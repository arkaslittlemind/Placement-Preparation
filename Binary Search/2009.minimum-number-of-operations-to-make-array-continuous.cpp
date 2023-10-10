/*
 * @lc app=leetcode id=2009 lang=cpp
 *
 * [2009] Minimum Number of Operations to Make Array Continuous
 */

// @lc code=start
class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int low = 0;
        int maxCount = 1;
        int current = 1;

        for(int high = 1; high < n; high++) {
            if(nums[high] == nums[high - 1]) {
                continue;
            }

            while(nums[high] - nums[low] > n - 1) {
                if(low < n && nums[low + 1] == nums[low]) {
                    current++;
                }
                low++;
                current--;
            }
            current++;

            maxCount = max(maxCount, current);
        }
        int minOps = n - maxCount;
        return minOps;
    }
};
// @lc code=end

