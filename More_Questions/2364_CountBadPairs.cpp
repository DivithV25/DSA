class Solution {
    public:
        long long countBadPairs(vector<int>& nums) {
            long long count = 0;
            unordered_map<int,int> mp;
            for(int i=0;i<nums.size();i++){
                nums[i]=nums[i]-i;
            }
            mp[nums[0]]=1;
            for(int j=1;j<nums.size();j++){
                int countOfNums= mp[nums[j]];
                int totalNumsBefore=j;
                int pairs=totalNumsBefore-countOfNums;
                count+=pairs;
                mp[nums[j]]++;
            }
            return count;
        }
    };