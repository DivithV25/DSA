class Solution {
    public:
        void backTrack(int i, string digits, map<char, string>& mp,
                       vector<string>& ans, string str) {
            if (str.length() == digits.length()) {
                if (!str.empty()) {
    
                    ans.push_back(str);
                }
                return;
            }
            for (char c : mp[digits[i]]) {
                str.push_back(c);
    
                backTrack(i + 1, digits, mp, ans, str);
                str.pop_back();
            }
        }
        vector<string> letterCombinations(string digits) {
            map<char, string> mp;
            mp['2'] = "abc";
            mp['3'] = "def";
            mp['4'] = "ghi";
            mp['5'] = "jkl";
            mp['6'] = "mno";
            mp['7'] = "pqrs";
            mp['8'] = "tuv";
            mp['9'] = "wxyz";class Solution {
                public:
                    void backTrack(int i, string digits, map<char, string>& mp,
                                   vector<string>& ans, string str) {
                        if (str.length() == digits.length()) {
                            if (!str.empty()) {
                
                                ans.push_back(str);
                            }
                            return;
                        }
                        for (char c : mp[digits[i]]) {
                            str.push_back(c);
                
                            backTrack(i + 1, digits, mp, ans, str);
                            str.pop_back();
                        }
                    }
                    vector<string> letterCombinations(string digits) {
                        map<char, string> mp;
                        mp['2'] = "abc";
                        mp['3'] = "def";
                        mp['4'] = "ghi";
                        mp['5'] = "jkl";
                        mp['6'] = "mno";
                        mp['7'] = "pqrs";
                        mp['8'] = "tuv";
                        mp['9'] = "wxyz";
                        string str = "";
                        vector<string> ans;
                        backTrack(0, digits, mp, ans, str);
                        return ans;
                    }
                };
            string str = "";
            vector<string> ans;
            backTrack(0, digits, mp, ans, str);
            return ans;
        }
    };