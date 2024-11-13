class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
    sort(nums.begin(),nums.end());
     int n=nums.size();
     long long count=0;
     for(int i=0;i<nums.size();i++){
        int lowDiff=lower-nums[i];
        int highDiff=upper-nums[i];
        
        auto beginPair=lower_bound(nums.begin()+i+1,nums.end(),lowDiff);   // lower bound returns the first element >=lowDiff
        auto endPair=upper_bound(nums.begin()+i+1,nums.end(),highDiff);    //upper bound returns the first element >highDiff
        count+=endPair-beginPair;
     }
     return count;
    }
};