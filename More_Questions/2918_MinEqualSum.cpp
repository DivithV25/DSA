class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0, sum2 = 0;
        long long zeroCount1 = 0, zeroCount2 = 0;
        for (int num : nums1) {
            sum1 += num;
            if (num == 0) {
                zeroCount1++;
            }
        }
        for (int num : nums2) {
            sum2 += num;
            if (num == 0) {
                zeroCount2++;
            }
        }
        if ((!zeroCount1 && (sum1 < sum2 + zeroCount2)) || (!zeroCount2 && (sum2 < sum1 + zeroCount1))) {
            return -1;
        }
        return max(sum2 + zeroCount2, sum1 + zeroCount1);
    }
};