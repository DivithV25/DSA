class Solution {
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            int sub=1<<nums.size();
            vector<vector<int>> result;
            for(int num=0;num<sub;num++){
                vector<int> ans;
                for(int j=0;j<nums.size();j++){
                    if(num&(1<<j)){
                        ans.push_back(nums[j]);
                    }
                }
                result.push_back(ans);
            }
            return result;
        }
    };