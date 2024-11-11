class Solution {
public:
    int maxPower(string s) {
        if(s.length()==1){
            return 1;
        }
        int maxCount = INT_MIN;
        int i = 0;
        while (i < s.length() - 1) {
            int count = 1;
            while (s[i] == s[i + 1] && i < s.length() - 1) {
                count++;
                i++;
            }
            maxCount = max(maxCount, count);
            i++;
        }
        return maxCount;
    }
};