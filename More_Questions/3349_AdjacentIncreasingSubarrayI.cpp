class Solution {
public:
    bool isIncreasing(vector<int>& nums, int i, int k) {
        for (int m = i; m < i + k - 1; m++) {
            if (nums[m] >= nums[m + 1])
                return false;
        }
        return true;
    }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < 2 * k)
            return false;

        for (int i = 0; i <= n - 2 * k; i++) {
            if (isIncreasing(nums, i, k) && isIncreasing(nums, i + k, k)) {
                return true;
            }
        }
        return false;
    }
};