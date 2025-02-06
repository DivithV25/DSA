class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int> mp;
        int result=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int multiply=nums[i]*nums[j];
                result+=8*mp[multiply];
                mp[multiply]++;
            }
        }
        return result;
    }
};