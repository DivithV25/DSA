class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> st;
        int n = s.length();
        int i = 0, j = 0;
        int countMAX = 0;
        while (j < n) {
            if (!st.count(s[j])) {
                st.insert(s[j]);
                countMAX = max(countMAX, j-i+1);
                j++;
            } else {
                st.erase(s[i]);
                i++;
            }
        }
        return countMAX;
    }
};