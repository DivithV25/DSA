class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        set<int> st(spaces.begin(), spaces.end());
        string result = "";
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (st.count(i)) {
                result += " ";
            }
            result += s[i];
        }

        return result;
    }
};