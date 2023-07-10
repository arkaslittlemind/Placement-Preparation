class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        long left = 0;
        long right = nums.size() - 1;

        while(left <= right) {
            long middle = left + ((right - left) / 2);

            if(target == nums[middle])
                return middle;
            
            if(target > nums[middle])
                left = middle + 1;

            else
                right = middle - 1;
        }
        return left;
    }
};