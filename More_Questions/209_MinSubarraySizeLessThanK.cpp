class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int result=INT_MAX;
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=nums[j];        
            while(sum>=target){
                result=min(result,j-i+1);
                sum-=nums[i];
                i++;
            }
        }
        return result==INT_MAX?0:result;
    }
};