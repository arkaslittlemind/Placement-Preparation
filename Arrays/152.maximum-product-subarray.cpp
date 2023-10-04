/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */

// @lc code=start
class Solution
{
public:
    int maxProduct(vector<int> &arr) {
        long long n = arr.size();
        long long maxiProduct = INT_MIN;
        long long currProd = 1;

        for(long long i = 0; i < n; i++) {
            currProd *= arr[i];
            maxiProduct = max(maxiProduct, currProd);
            if(currProd == 0) currProd = 1;
        }
        currProd = 1;
        for(long long i = n - 1; i >= 0; i--) {
            currProd *= arr[i];
            maxiProduct = max(maxiProduct, currProd);
            if(currProd == 0) currProd = 1;
        }
        return maxiProduct;
    }
};
// @lc code=end
