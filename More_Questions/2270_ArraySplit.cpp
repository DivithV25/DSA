class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long> preSum;
        vector<long> suffSum(n, 0);
        preSum.push_back(nums[0]);
        for (int i = 1; i < n; i++) {
            preSum.push_back(preSum[i - 1] + nums[i]);
        }
        suffSum[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffSum[i] = (suffSum[i + 1] + nums[i]);
        }

        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (preSum[i] >= suffSum[i + 1]) {
                count++;
            }
        }
        return count;
    }
};