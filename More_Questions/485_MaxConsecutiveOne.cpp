class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxcount=INT_MIN;
        for(auto i:nums){
            if(i==0){
                count=0;
            }else{
                count++;
            }
            maxcount=max(maxcount,count);
        }
            maxcount=max(maxcount,count);

        return maxcount;
    }
};