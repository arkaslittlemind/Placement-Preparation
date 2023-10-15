/*
 * @lc app=leetcode id=2210 lang=cpp
 *
 * [2210] Count Hills and Valleys in an Array
 */

// @lc code=start
class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        
        int res = 0;
        int i = 1, j = 0;
        for(int i = 1; i < n - 1; i++) {
            if(nums[j] < nums[i] && nums[i] > nums[i + 1]) {
                res++;
                j = i;
            } else if(nums[j] > nums[i] && nums[i] < nums[i + 1]) {
                res++;
                j = i;
            }
        }
        return res;
    }
};
// @lc code=end

