/*
 * @lc app=leetcode id=1482 lang=cpp
 *
 * [1482] Minimum Number of Days to Make m Bouquets
 */

// @lc code=start
class Solution {

    bool canMake(vector<int>& bloomDay, int m, int k, long long days) {
        int flowers = 0;
        int bouquets = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= days) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }
        }
        return bouquets >= m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long low = *min_element(bloomDay.begin(), bloomDay.end());
        long long high = accumulate(bloomDay.begin(), bloomDay.end(), 0LL);

        while (low < high) {
            long long mid = low + (high - low) / 2;
            if (canMake(bloomDay, m, k, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return canMake(bloomDay, m, k, low) ? low : -1;
    }
};
// @lc code=end

