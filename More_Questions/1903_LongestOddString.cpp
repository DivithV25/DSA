class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int i=0;
        for( i=n-1;i>=0;i--){
            if((num[i]-'0')%2!=0)
            break; 
        }
        return num.substr(0,i+1);
    }
};