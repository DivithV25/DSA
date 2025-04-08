class Solution {
    public:
        bool checkUnique(const vector<int>& nums, int i) {
            unordered_set<int> seen;
            for (int k = i; k < nums.size(); ++k) {
                if (seen.count(nums[k])) {
                    return false;
                }
                seen.insert(nums[k]);
            }
            return true;
        }
        int minimumOperations(vector<int>& nums) {
            int n = nums.size();
            int i = 0, count = 0;
    
            while (i <= n) {
                if (checkUnique(nums, i)) {
                    return count;
                }
    
                i += 3;
                count++;
            }
    
            return count;
        }
    };