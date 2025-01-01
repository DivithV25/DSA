class Solution {
public:
    int maxScore(string s) {

        int oneCount = 0;
        for (char& c : s) {
            if (c == '1') {
                oneCount++;
            }
        }
        int currZero = 0;
        int maxScore = INT_MIN;
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == '0') {
                currZero++;
            } else {
                oneCount--;
            }
            maxScore = max(maxScore, (currZero + oneCount));
        }
        return maxScore;
    }
};