/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
private:
    int firstOccurrence(vector<int> &nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int first = -1;

        while(low <= high) {
            int mid = low + ((high - low) / 2);
            if(nums[mid] == target) {
                first = mid;
                high = mid - 1;
            } else if(nums[mid] < target) {
                low = mid + 1; 
            } else {
                high = mid - 1;
            }
        }
        return {first};
    }
    int lastOccurrence(vector<int> &nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int last = -1;

        while(low <= high) {
            int mid = low + ((high - low) / 2);
            if(nums[mid] == target) {
                last = mid;
                low = mid + 1;
            } else if(nums[mid] < target) {
                low = mid + 1; 
            } else {
                high = mid - 1;
            }
        }
        return {last};
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstIndex = firstOccurrence(nums, target);
        int lastIndex  = lastOccurrence(nums, target);

        if(firstIndex == -1) return {-1, -1}; //edge case
        
        return {firstIndex, lastIndex};
    }
};
// @lc code=end

