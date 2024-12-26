class Solution {
public:
    string finalString(string s) {
        string result = "";
        for (auto i : s) {
            if (i == 'i') {
                string rev(result.rbegin(), result.rend());
                result = rev;
            } else
                result += i;
        }
        return result;
    }
};