class Solution {
public:
    int minimumLength(string s) {
        vector<int> freq(26, 0);
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            while (freq[i] >= 3) {
                count++;
                freq[i] -= 2;
            }
        }
        int n = s.length();
        return (n - count * 2);
    }
};