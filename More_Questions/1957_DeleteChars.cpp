class Solution {
public:
    string makeFancyString(string s) {
        string result = "";
        result.push_back(s[0]);
        int count = 1;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == result.back()) {
                count++;
                if (count < 3)
                    result.push_back(s[i]);
            } else {
                count = 1;
                result.push_back(s[i]);
            }
        }
        return result;
    }
};