class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n,1);
        int left = 1;
        for (int i = 0; i < n; i++) {
            result[i] = left;                             //Left Prefix Multiplication Result
            left *= nums[i];
        }

        int right = 1;

        for (int j = n - 1; j >= 0; j--) {                //Right Prefix Multiplication Result
            result[j] *= right;
            right *= nums[j];                            
        }
        return result;
    }
};