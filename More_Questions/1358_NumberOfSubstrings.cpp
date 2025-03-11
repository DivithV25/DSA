class Solution {
    public:
        int numberOfSubstrings(string s) {
            int n = s.length();
            int i = 0, j = 0;
            map<char, int> mp;
            int result = 0;
            while (j < n) {
                mp[s[j]]++;
                while (mp.size() == 3) {
                    result += n - j;
                    mp[s[i]]--;
                    if (mp[s[i]] == 0) {
                        mp.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
            return result;
        }
    };