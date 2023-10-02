/*
 * @lc app=leetcode id=2643 lang=cpp
 *
 * [2643] Row With Maximum Ones
 */

// @lc code=start
class Solution {
private: 
    int lowerBound(vector<int> &arr, int n, int x) {
        int low = 0, high = n - 1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(arr[mid] >= x) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int countMax = -1;
        int index = -1;

        for(int i = 0; i < n; i++) {
            sort(mat[i].begin(), mat[i].end());
        }


        for(int i = 0; i < n; i++) {
            int countOnes = m - lowerBound(mat[i], m, 1);
            if(countOnes > countMax) {
                countMax = countOnes;
                index = i;
            }
        }
        return {index, countMax};
    }
};
// @lc code=end

