class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int count = 0;
        vector<int> answer(nums.begin(), nums.end());
        vector<int> answer2(nums.begin(), nums.end());
        for (int i = 1; i < n; i++) {
            answer[i] = answer[i - 1] + answer[i];
        }

        for (int i = n - 2; i >= 0; i--) {
            answer2[i] = answer2[i + 1] + answer2[i];
        }
        for (int j = 0; j < n - 1; j++) {
            if (abs((answer[j] - answer2[j + 1]) % 2) == 0) {
                count++;
            }
        }

        return count;
    }
};