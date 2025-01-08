class Solution {
public:
    bool isPrefixAndSuffix(string str1, string str2) {
        if (str1.length() > str2.length())
            return false;
        string pre = str2.substr(0, str1.length());
        string suff = str2.substr(str2.length() - str1.length(), str2.length());
        return ((pre == str1) && (suff == str1));
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            string str1 = words[i];
            for (int j = i + 1; j < words.size(); j++) {
                string str2 = words[j];
                if (isPrefixAndSuffix(str1, str2)) {
                    count++;
                }
            }
        }
        return count;
    }
};