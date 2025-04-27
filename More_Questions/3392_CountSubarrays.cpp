class Solution {
    public:
        int countSubarrays(vector<int>& nums) {
          int count=0;
          int n=nums.size();
            if(n==3){
               if(nums[0]+nums[2]==nums[1]/2){
                return 1;
               }
               return 0; 
            }
            for(int i=0;i<n-2;i++){
               
                if((nums[i]+(nums[i+2]))==((double)(nums[i+1])/2)){
                 
                    count++;
                }
            }
            return count;
        }
    };