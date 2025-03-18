class Solution {
    public:
        int longestNiceSubarray(vector<int>& nums) {
            int n = nums.size();
            int maxLen = 1;
            int i = 0;
            int bits = 0;
            int j = 0;
            while (j < n) {
                while ((bits & nums[j]) != 0) {
                    bits ^= nums[i];
                    i++;
                }
                bits |= nums[j];
                maxLen = max(maxLen, j - i + 1);
                j++;
            }
            return maxLen;
        }
    };