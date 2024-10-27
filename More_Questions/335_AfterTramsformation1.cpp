class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int MODU = 1000000007;
        vector<long long> chars(26, 0);
        for (int i = 0; i < s.length(); i++) {
            chars[s[i] - 'a']++;
        }

        for (int i = 0; i < t; i++) {
            vector<long long> newCharcters(26, 0);
            for (int j = 0; j < 26; j++) {
                if (j == 25) {
                    newCharcters[0] = (newCharcters[0] + chars[j]) % MODU;
                    newCharcters[1] = (newCharcters[1] + chars[j]) % MODU;
                } else {
                    newCharcters[j + 1] =
                        (newCharcters[j + 1] + chars[j]) % MODU;
                }
            }
            chars = newCharcters;
        }
        long long answer = 0;
        for (int k = 0; k < 26; k++) {
            answer = (answer + chars[k]) % MODU;
        }
        return answer;
    }
};