class Solution {
public:
    void updateWindow(vector<int>& vec, int num, int val) {
        for (int i = 0; i < 32; i++) {
            if ((num >> i) & 1) {
                vec[i] += val;
            }
        }
    }
    int todecimal(vector<int>& vec) {
        int num = 0;
        for (int i = 0; i < 32; i++) {
            if (vec[i] > 0) {
                num |= (1 << i);
            }
        }
        return num;
    }
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        vector<int> vec(32, 0);
        int result = INT_MAX;
        while (j < n) {
            updateWindow(vec, nums[j], 1);

            while (i <= j && todecimal(vec) >= k) {
                result = min(result, j - i + 1);
                updateWindow(vec, nums[i], -1);
                i++;
            }
            j++;
        }
        return result == INT_MAX ? -1 : result;
    }
};