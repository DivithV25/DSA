class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> answer;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
            if (freq[nums[i]] == 2) {
                answer.push_back(nums[i]);
            }
        }
        return answer;
    }
};