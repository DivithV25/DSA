class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        vector<int> prefix(nums.size(), 0);
        prefix[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = nums[i] + prefix[i - 1];
        }
        unordered_map<int, int> map;
        for (auto i : prefix) {
            if (i == k) {
                count++;
            }
            if (map.find(i - k) != map.end()) {
                count += map[i - k];
            }
            map[i]++;
        }
        return count;
    }
};