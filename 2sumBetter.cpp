//Using HASH MAP//

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int a = nums[i];
            int moreNeeded = target - a;
            if(mp.find(moreNeeded) != mp.end()) {
                return {mp[moreNeeded], i};
            }
            mp[a] = i; 
        }
        return {-1, 1};
    }
};

