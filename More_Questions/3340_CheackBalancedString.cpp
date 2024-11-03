class Solution {
public:
    bool isBalanced(string num) {
        int evenSum=0;
        int oddSum=0;
        int n=num.length();
       
        for(int i=0;i<n;i++){
          if(i%2==0)
            evenSum+=(num[i])-'0';
          else
            oddSum+=(num[i])-'0';
          
        }
    
     return evenSum==oddSum;
    }
};