class Solution {
    public:
        string removeOccurrences(string s, string part) {
            int n = part.size();
            while (s.find(part) != string::npos) {
                int m = s.length();
                string ans = "";
                for (int i = 0; i < m; i++) {
                    if (i != s.find(part)) {
                        ans += s[i];
                    } else {
                        i = i + (n - 1);
                    }
                }
                s = ans;
            }
    
            return s;
            
        }
    };