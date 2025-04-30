class Solution {
    public:
        int findNumbers(vector<int>& nums) {
            int count=0;
            for(int &num:nums){
                string ans=to_string(num);
                if(ans.length()%2==0){
                    count++;
                }
            }
            return count;
        }
    };