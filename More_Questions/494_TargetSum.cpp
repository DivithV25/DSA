class Solution {
public:
    int calculateSumSub(vector<int>& nums, int target, int i, int sum) {
        if (i == nums.size()) {
            if (sum == target)
                return 1;
            return 0;
        }

        int subSum = calculateSumSub(nums, target, i + 1, sum + nums[i]);
        int sub = calculateSumSub(nums, target, i + 1, sum - nums[i]);

        return subSum + sub;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return calculateSumSub(nums, target, 0, 0);
    }
};