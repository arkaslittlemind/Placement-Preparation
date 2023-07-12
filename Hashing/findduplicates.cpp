class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, int> count;
        for (auto it : nums) {
            if(count[it] >= 1)
                return true;
            count[it]++;
        }
        return false;
    }
};