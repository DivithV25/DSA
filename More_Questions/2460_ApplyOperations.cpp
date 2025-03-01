class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]==nums[i+1]){
                    nums[i]=nums[i]*2;
                    nums[i+1]=0;
                }
            }
            int count=0;
            vector<int> result;
            for(int num:nums){
              if(num==0){
                count++;
              }else{
                result.push_back(num) ;  
              }
            }
    
            for(int i=0;i<count;i++){
                result.push_back(0);
            }
    
            return result;
        }
    };