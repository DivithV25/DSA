class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) {
            return false;
        }
        vector<int> mp1(26, 0);
        vector<int> mp2(26, 0);
        for (int i = 0; i < word1.length(); i++) {
            mp1[word1[i] - 'a']++;
            mp2[word2[i] - 'a']++;
        }
        //Same characters are present in both the words
        for (int i = 0; i < 26; i++) {
            if (mp1[i] != 0 && mp2[i] != 0) {
                continue;
            }
            if (mp1[i] == 0 && mp2[i] == 0) {
                continue;
            }

            return false;
        }
       //same frequency count is there in both are array even tough for different elements
        sort(mp1.begin(), mp1.end());
        sort(mp2.begin(), mp2.end());
        return mp1 == mp2;
    }
};