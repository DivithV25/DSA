class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> frequency;
        for (auto i : nums) {
            frequency[i]++;
        }
        for (auto it : frequency) {
            if (it.second >= 2)
                return true;
        }
        return false;
    }
    };