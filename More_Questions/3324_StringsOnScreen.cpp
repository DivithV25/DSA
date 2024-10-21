class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> result;
        string ans = "";
        for (char c : target) {
            ans += 'a';
            result.push_back(ans);

            while (ans.back() != c) {
                ans.back() = (ans.back() == 'z') ? 'a' : ans.back() + 1;
                result.push_back(ans);
            }
        }
        return result;
    }
};