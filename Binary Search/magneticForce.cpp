class Solution {
private:
    bool canDistribute(vector<int> &position, long long mid, long long M) {
        long long n = position.size();
        long long countBalls = 1;
        long long lastPos = position[0];

        for(long long i = 1; i < n; i++) {
            if(abs(position[i] - lastPos) >= mid) {
                countBalls++;
                lastPos = position[i];
            }
            if(countBalls >= M) return true;
        }
        return false;
    }    
public:
    long long maxDistance(vector<int>& position, long long M) {
        sort(position.begin(), position.end());
        long long n = position.size();
        long long low = 0;
        long long high = position[n - 1] - position[0];

        if(M == 2) return position.back() - position[0];

        while(low <= high) {
            long long mid = low + ((high - low) / 2);

            if(canDistribute(position, mid, M)) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return high;
    }
};