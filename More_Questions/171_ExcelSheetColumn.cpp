class Solution {
    public:
        int titleToNumber(string columnTitle) {
            int result=0;
            for(char ch:columnTitle){
                int curr=ch-'A'+1;
                result=result*26+curr;
            }
            return result;
        }
    };