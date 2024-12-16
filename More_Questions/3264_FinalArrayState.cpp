class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int i = 0;
        while (i < k) {
            int min = nums[0];
            int minIN = 0;
            for (int j = 1; j < nums.size(); j++) {
                if (nums[j] < min) {
                    min = nums[j];
                    minIN = j;
                }
            }
            nums[minIN] = nums[minIN] * multiplier;
            i++;
        }
        return nums;
    }
};