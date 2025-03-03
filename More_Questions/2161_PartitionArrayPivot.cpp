class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            int pivotIndex = 0;
            vector<int> result(nums.size(), 0);
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] < pivot) {
                    pivotIndex++;
                }
            }
            int k = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] < pivot) {
                    result[k++] = nums[i];
                }
            }
            int j = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == pivot) {
                    result[pivotIndex + j] = pivot;
                    j++;
                }
            }
            int l = pivotIndex + j;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] > pivot && l < nums.size()) {
                    result[l++] = nums[i];
                }
            }
    
            return result;
        }
    };