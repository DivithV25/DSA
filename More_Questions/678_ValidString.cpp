class Solution {
public:
    bool checkValidString(string s) {
        int minR = 0, maxR = 0;
        for (char& c : s) {
            if (c == '(') {
                minR++;
                maxR++;
            } else if (c == ')') {
                minR--;
                maxR--;
            } else {
                minR--;
                maxR++;
            }
            if (minR < 0)
                minR = 0;
            if (maxR < 0)
                return false;
        }
        return minR == 0;
    }
};