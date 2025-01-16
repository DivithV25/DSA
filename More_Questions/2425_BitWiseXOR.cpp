class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        if (n % 2 == 0 && m % 2 == 0) {
            return 0;
        }
        int ans = 0;
        if (n % 2 != 0) {
            for (auto num : nums2) {
                ans ^= num;
            }
        }
        if (m % 2 != 0) {
            for (auto num : nums1) {
                ans ^= num;
            }
        }
        return ans;
    }
};