class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0, j = 0;
        int n = nums.size();
        int zerocount = 0, count = 0, maxCount = 0;
        while (j < n) {
            if (nums[j] == 0) {
                zerocount++;
            } else {
                count++;
            }
            while (zerocount > 1) {
                if (nums[i] == 0) {
                    zerocount--;

                } else {
                    count--;
                }
                i++;
            }
            maxCount = max(maxCount, count);
            j++;
        }

        return zerocount > 0 ? maxCount : maxCount - 1;
    }
};