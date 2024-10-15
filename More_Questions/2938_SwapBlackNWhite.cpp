class Solution {
public:
    long long minimumSteps(string s) {
        long long swap = 0;
        int blackcount = 0;
        for (char c : s) {
            if (c == '1') {
                blackcount++;
            } else {
                swap += blackcount;
            }
        }
        return swap;
    }
};