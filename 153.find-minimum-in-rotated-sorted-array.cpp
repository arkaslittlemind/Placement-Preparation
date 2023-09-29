/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        int low = 0, high = n - 1;

        while(low <= high) {
            int mid = low + ((high - low) / 2);
            
            if(nums[low] <= nums[mid]) {
                ans = min(nums[low], ans);
                low = mid + 1;
            }
            else {
                ans = min(nums[mid], ans);
                high = mid - 1; 
            }
        }
        return ans;
    }
};
// @lc code=end

