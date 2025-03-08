class Solution {
    public:
        void reCall(int ind, vector<int>& ans, vector<int>& nums, vector<int>& ds,
                    vector<vector<int>>& result) {
            if (ds.size() == nums.size()) {
                result.push_back(ds);
                return;
            }
            for (int i = 0; i < nums.size(); i++) {                //Move the For loop for every element in the map to check if can be picked
                if (ans[i] != 1) {
                    ans[i] = 1;
                    ds.push_back(nums[i]);
                    reCall(i + 1, ans, nums, ds, result);
                    ans[i] = 0;
                    ds.pop_back();
                }
            }
        }
        vector<vector<int>> permute(vector<int>& nums) {
            vector<int> ans(nums.size(),0);
            vector<int> ds;
            vector<vector<int>> result;
            reCall(0,ans,nums,ds,result);
            return result;
        }
    };