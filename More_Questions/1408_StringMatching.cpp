class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string> st;
        for (string& str : words) {
            for (string& str1 : words) {
                if ((str != str1) && (str1.find(str) != string::npos)) {
                    st.insert(str);
                }
            }
        }
        vector<string> answer(st.begin(), st.end());
        return answer;
    }
};