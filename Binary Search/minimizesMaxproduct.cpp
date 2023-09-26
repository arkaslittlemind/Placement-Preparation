class Solution {

private: 
    bool checker(vector<int> &quantities, int n, int limit) {
        long long count = 0;
        int sz = quantities.size();

        for(int i = 0; i < sz; i++) {
            if(quantities[i] <= limit) {
                count++;
            } else {
                int temp = quantities[i];
                while(temp > 0) {
                    temp = temp - limit;
                    count++;
                }
            }
            if(count > n) return false;
        }
        return true;
    }    
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        
        int low = 1, high = *max_element(quantities.begin(), quantities.end());
        int res = INT_MAX;
        while(low <= high) {
            int mid = low + ((high - low) / 2);
            if(checker(quantities, n, mid)) {
                res = min(res, mid);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return res;
    }
};