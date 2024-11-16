class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        set<int> st;
        int i = 0;
        int n = nums.size();
        long long maxSum = 0, currSum = 0;

        for (int j = 0; j < n; j++) {
            while (st.count(nums[j])) {
                currSum -= nums[i];
                st.erase(nums[i]);
                i++;
            }
            currSum += nums[j];
            st.insert(nums[j]);

            if (j - i + 1 == k) {
                maxSum = max(maxSum, currSum);
                currSum -= nums[i];
                st.erase(nums[i]);
                i++;
            }
        }

        return maxSum;
    }
};