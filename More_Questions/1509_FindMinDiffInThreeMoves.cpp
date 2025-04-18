class Solution {
    public:
        int minDifference(vector<int>& nums) {
            if (nums.size() <= 4) {
                return 0;
            }
            sort(nums.begin(), nums.end());
    
            int minDiff = INT_MAX;
            int n = nums.size();
            for (int i = 0; i < 4; i++) {
    
                minDiff = min(minDiff, nums[n - 4 + i] - nums[i]);
            }
            return minDiff;
        }
    };