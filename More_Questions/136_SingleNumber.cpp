class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> a;
        for(auto x:nums){
            a[x]++;
        }
        for(auto y:a){
            if(y.second==1){
            return y.first;
            }
        }
        return -1;
    }
};