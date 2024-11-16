class Solution {
public:
    bool isDecreasing(int i, int j, vector<int>& nums) {
        for (int m = i; m < j; m++) {
            if (nums[m + 1] != nums[m]+1) {
                return false;
            }
        }
        return true;
    }
    vector<int> resultsArray(vector<int>& nums, int k) {
        int i = 0;
        vector<int> answer;
        int j = 0;
        int n = nums.size();
        while (j < n) {
            while (j < n && j - i + 1 < k) {
                j++;
            }
            if (isDecreasing(i, j, nums)) {
                answer.push_back(nums[j]);
            } else {
                answer.push_back(-1);
            }
            j++;
            i++;
        }

        return answer;
    }
};