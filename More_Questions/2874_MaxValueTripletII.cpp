class Solution {
    public:
        long long maximumTripletValue(vector<int>& nums) {
            long diff = 0, maxNum = 0, result = 0;
            for (long num : nums) {
                result = max(result, diff * num);
                diff = max(diff, maxNum - num);
                maxNum = max(maxNum, num);
            }
            return result;
        }
    };