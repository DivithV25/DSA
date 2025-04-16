class Solution {
    public:
        vector<int> singleNumber(vector<int>& nums) {
            long OXOR = 0;
            for (auto num : nums) {
                OXOR ^= num;
            }
            int XOR1 = 0;
            int XOR2 = 0;
            int rightMost = (OXOR & (OXOR - 1)) ^ OXOR;
            for (int& num : nums) {
                if (num & rightMost) {
                    XOR1 ^= num;
                } else {
                    XOR2 ^= num;
                }
            }
            
            return {XOR1,XOR2};
        }
    };