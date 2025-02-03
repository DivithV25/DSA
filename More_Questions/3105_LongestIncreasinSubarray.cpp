class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1;
        int incMax = 1;
        int dec = 1;
        int decMax = 1;

        for (int i = 0; i < nums.size() -1; i++) {
            if (nums[i + 1] > nums[i]) {
                inc++;
            } else {
                incMax = max(incMax, inc);
                inc = 1;
            }
            if (nums[i + 1] < nums[i]) {
                dec++;
            } else {
                decMax = max(decMax, dec);
                dec = 1;
            }
        }
        incMax = max(incMax, inc);
        decMax = max(decMax, dec);
        return max(incMax, decMax);
    }
};