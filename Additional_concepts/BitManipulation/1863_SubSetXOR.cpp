class Solution {
    public:
        int sum = 0;
        void helper(int i, int n, vector<int>& nums, int XOR) {
            if (i >= n) {
                sum += XOR;
                return;
            }
    
            helper(i + 1, n, nums, XOR ^ nums[i]);
            helper(i + 1, n, nums, XOR);
        }
        int subsetXORSum(vector<int>& nums) {
            helper(0, nums.size(), nums, 0);
            return sum;
        }
    };