/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
private:
    bool binarySearch(vector<vector<int>>& matrix, int target) {
        int low = 0, high = matrix.size() * matrix[0].size() - 1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            int row = mid / matrix[0].size();
            int col = mid % matrix[0].size();
            if(matrix[row][col] == target) {
                return true;
            } else if(matrix[row][col] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            } 
        }
        return false;
    }

public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0; i < matrix.size(); ++i) {
            if(matrix[i][0] <= target && matrix[i][matrix[0].size() - 1] >= target) {
                return binarySearch(matrix, target);
            }
        }
        return false;
    }
};
// @lc code=end

