class Solution {
    public:
        void callRe(int ind,vector<int> &ds,vector<vector<int>> &result,vector<int> &nums){
            result.push_back(ds);
            for(int i=ind;i<nums.size();i++){
                if(ind!=i && nums[i]==nums[i-1]) continue;  // pick it up only if it is the starting index
                ds.push_back(nums[i]);
                callRe(i+1,ds,result,nums);
                ds.pop_back();
            }
        
        }
        vector<vector<int>> subsetsWithDup(vector<int>& nums) {
           sort(nums.begin(),nums.end());
           vector<int> ds;
           vector<vector<int>> result;
            callRe(0,ds,result,nums);
            return result;
        }
    };