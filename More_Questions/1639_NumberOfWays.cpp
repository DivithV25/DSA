class Solution {
public:
    int numWays(vector<string>& words, string target) {
        const int MODULO = 1'000'000'007;
        int targetLength = target.size();
        int wordLength = words[0].size();

        vector<vector<int>> charFrequency(wordLength, vector<int>(26, 0));
        for (const string& currentWord : words) {
            for (int col = 0; col < wordLength; ++col) {
                charFrequency[col][currentWord[col] - 'a']++;
            }
        }

        vector<long long> ways(targetLength + 1, 0);
        ways[0] = 1;

        for (int col = 0; col < wordLength; ++col) {
            for (int pos = targetLength - 1; pos >= 0; --pos) {
                int targetChar = target[pos] - 'a';
                ways[pos + 1] = (ways[pos + 1] +
                                 ways[pos] * charFrequency[col][targetChar]) %
                                MODULO;
            }
        }

        return ways[targetLength];
    }
};