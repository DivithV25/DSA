class Solution {
    public:
        int digitsum(int n) {
            int sum = 0;
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            return sum;
        }
        int maximumSum(vector<int>& nums) {
    
            unordered_map<int, int> mp;
            int result = -1;
            for (int i = 0; i < nums.size(); i++) {
                int digitS = digitsum(nums[i]);
                if (mp.count(digitS)) {
                    result = max(result, nums[i] + mp[digitS]);
                }
                mp[digitS] = max(mp[digitS], nums[i]);
            }
    
            return result;
        }
    };