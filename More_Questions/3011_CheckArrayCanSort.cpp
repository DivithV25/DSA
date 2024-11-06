class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            bool swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                
                if (nums[j] > nums[j + 1]) {
                    if ( __builtin_popcount(nums[j]) == __builtin_popcount(nums[j + 1])) {
                        swap(nums[j], nums[j + 1]);
                    } else {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};