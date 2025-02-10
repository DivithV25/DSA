class Solution {
    public:
        string clearDigits(string s) {
            stack<int> st;
            for (int i = 0; i < s.length(); i++) {
                if (isdigit(s[i])) {
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            }
            string ans = "";
            while (!st.empty()) {
                char ch = st.top();
                ans = ch + ans;
                st.pop();
            }
            return ans;
        }
    };