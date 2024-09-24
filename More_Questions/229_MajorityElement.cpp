class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     
      vector<int> ans;
      unordered_map<int,int> hash;
      int n=nums.size()/3;
      for(int i=0;i<nums.size();i++){
        hash[nums[i]]++;
      }
      for(auto &it:hash){
        if(it.second>n){
            ans.push_back(it.first);
        }
      }
      return ans;
    }
};