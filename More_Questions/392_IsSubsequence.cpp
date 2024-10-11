class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp = 0;
        int tp = 0;
        int n = s.size(), m = t.size();
        while (sp < n && tp < m) {
            if (s[sp] == t[tp]) {
                sp++;
            }
            tp++;
        }
        return sp == s.size();
    }
};