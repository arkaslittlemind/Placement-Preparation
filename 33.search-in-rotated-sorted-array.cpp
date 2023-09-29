/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        while(low <= high) {
            int mid = low + ((high - low) / 2);

            
            if(nums[mid] == target) return mid;

            //if left space is sorted
            if(nums[low] <= nums[mid]) {
                if(nums[low] <= target && target <= nums[mid]) {
                    //element exists
                    high = mid - 1;
                } else {
                    //element doesn't exist
                    low = mid + 1;
                }
            }
            // if right part is sorted
            else {
                if(nums[mid] <= target && target <= nums[high]) {
                    //element exist
                    low = mid + 1;
                } else {
                    high = mid - 1; //element doesn't exist
                }
            }
        }
        return -1;
    }
};
// @lc code=end

