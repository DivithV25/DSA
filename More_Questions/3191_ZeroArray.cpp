class Solution {
    public:
        int minOperations(vector<int>& nums) {
            int count=0,n=nums.size();
            for(int j=0;j<n-2;j++){
                if(nums[j]==0){
                nums[j]=1;
                nums[j+1]=1-nums[j+1];
                nums[j+2]=1-nums[j+2];
                count++;
                }
            }
            if(nums[n-1] == 1 && nums[n-2] ==1){
                return count;
            }
            return -1;
        }
    };