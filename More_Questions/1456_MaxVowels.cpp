class Solution {
public:
    int maxVowels(string s, int k) {
        set<char> st={'a','e','i','o','u'};
        int n=s.length();
        int maxResult=0;
        int count=0;

        for(int i=0;i<k;i++){
            if(st.count(s[i])){
                count++;
            }
        }
        maxResult=count;

        for(int i=k;i<n;i++){
            if(st.count(s[i-k])){
                count--;
            }
            if(st.count(s[i])){
                count++;
            }
            maxResult=max(maxResult,count);
        }
        return maxResult;
    }
};