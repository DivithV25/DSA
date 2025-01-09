class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.length();
        int count = 0;
        for (string& str : words) {

            if (str.length() >= n) {
                string pre = str.substr(0, n);
                if (pre == pref) {
                    count++;
                }
            }
        }
        return count;
    }
};