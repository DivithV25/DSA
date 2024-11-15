class Solution {
public:
    int lessThanGoal(vector<int>& nums, int goal) {
        int i = 0, j = 0;
        int n = nums.size();
        long long count = 0, sum = 0;
        while (j < n) {
            sum += nums[j];
            while (sum > goal && i <= j) {
                sum -= nums[i];
                i++;
            }
            count += (j - i + 1);
            j++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return lessThanGoal(nums, goal) - lessThanGoal(nums, goal - 1);
    }
};