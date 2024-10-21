class Solution {
public:
    void solve(string& s, int i, unordered_set<string>& st, int currcount, int& maxcount) {
        if (currcount + (s.length() - 1) <= maxcount) {
            return;
        }
        if (i >= s.length()) {
            maxcount = max(maxcount, currcount);
            return;
        }

        for (int j = i; j < s.length(); j++) {
            string sub = s.substr(i, j - i + 1);
            if (st.find(sub) == st.end()) {
                st.insert(sub);
                solve(s, j + 1, st, currcount + 1, maxcount);
                st.erase(sub);
            }
        }
    }
    int maxUniqueSplit(string s) {
        unordered_set<string> st;
        int maxcount = 0;
        int i = 0;
        int currcount = 0;
        solve(s, i, st,currcount, maxcount);

        return maxcount;
    }
};