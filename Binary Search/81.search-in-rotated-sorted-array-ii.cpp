/*
 * @lc app=leetcode id=81 lang=cpp
 *
 * [81] Search in Rotated Sorted Array II
 */

// @lc code=start
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;

        while(low <= high) {
            int mid = low + ((high - low) / 2);

            if(nums[mid] == target) return true;

            if(nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low = low + 1;
                high = high - 1;
                continue;
            }

            //left space is sorted
            if(nums[low] <= nums[mid]) {
                if(nums[low] <= target && nums[mid] > target) {
                    //element exists
                    high = mid - 1;
                } else {
                    //element doesn't exist
                    low = mid + 1;
                }
            }

            else {
                if(nums[mid] < target && target <= nums[high]) {
                    //element exists
                    low = mid + 1;
                } else {
                    high = mid - 1; //element doesn't exist
                }
            }
        }
        return false;
    }
};
// @lc code=end

