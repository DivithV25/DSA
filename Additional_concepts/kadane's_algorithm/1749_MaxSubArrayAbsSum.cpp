class Solution {
    public:
        int maxAbsoluteSum(vector<int>& nums) {
            int maxSum = INT_MIN;
            int curSum = 0;
            for (int num : nums) {
                curSum = max(num, curSum + num);
                maxSum = max(maxSum, curSum);
            }
            int minSum = INT_MAX;
            curSum = 0;
            for (int num : nums) {
                curSum = min(num, curSum + num);
                minSum = min(minSum, curSum);
            }
            return maxSum > abs(minSum) ? maxSum : abs(minSum);
        }
    };