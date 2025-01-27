class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> answer;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            if (mp[nums[i]] == 2) {
                answer.push_back(nums[i]);
            }
        }
        int result = 0;
        for (int i = 0; i < answer.size(); i++) {
            result ^= answer[i];
        }
        return result;
    }
};