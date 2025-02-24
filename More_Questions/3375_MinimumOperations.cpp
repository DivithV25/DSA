class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            int minNum = *min_element(nums.begin(), nums.end());
            if (minNum < k) {
                return -1;
            }
            unordered_map<int, int> mp;
            for (int& num : nums) {
                mp[num] = 1;
            }
            int result = mp.size();
            if (mp[k]) {
                result--;
            }
            return result;
        }
    };