class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> frequency;
        for(auto i : nums){
            frequency[i]++;
        }
        vector<int> ans;
        for(auto it:frequency){
            ans.push_back(it.first);
        }
        for(int i=0;i<ans.size();i++){
            nums[i]=ans[i];
        }
        return frequency.size();
    }
};