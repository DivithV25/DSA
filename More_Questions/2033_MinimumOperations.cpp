class Solution {
    public:
        int minOperations(vector<vector<int>>& grid, int x) {
            vector<int> nums;
            for(vector<int> &vec:grid){
                for(int val:vec){
                    nums.push_back(val);
                }
            }
            sort(nums.begin(),nums.end());
            for(int num : nums){
                if(abs(num-nums[0])%x!=0){
                    return -1;
                }
            }
    
            int median = nums[nums.size()/2];
            int count=0;
            for(int num:nums){
                count+=abs(num-median)/x;
            }
            return count;
        }
    };