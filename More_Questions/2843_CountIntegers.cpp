class Solution {
    public:
        int countSymmetricIntegers(int low, int high) {
            int count=0;
            for(int i=low;i<=high;i++){
                string ans=to_string(i);
                if(ans.length()%2!=0){
                    continue;
                }
                int sum=0;
                for(int j=0;j<ans.length()/2;j++){
                    sum+=(ans[j]-'0');
                }
                int sum1=0;
                for(int j=(ans.length()/2);j<ans.length();j++){
                    sum1+=(ans[j]-'0');
                }
                if(sum==sum1){
                    count++;
                }
            }
            return count;
        }
    };