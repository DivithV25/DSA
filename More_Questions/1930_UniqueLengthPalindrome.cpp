class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int result = 0;
        int strLength = s.length();

        unordered_map<char, pair<int, int>> charPositions;

        for (int i = 0; i < strLength; i++) {
            if (charPositions.find(s[i]) == charPositions.end()) {
                charPositions[s[i]].first = i;
            }
            charPositions[s[i]].second = i;
        }

        for (auto& [character, indices] : charPositions) {
            int firstIndex = indices.first;
            int lastIndex = indices.second;

            if (lastIndex - firstIndex <= 1)
                continue; 

            unordered_set<char> intermediateChars;
            for (int i = firstIndex + 1; i < lastIndex; i++) {
                intermediateChars.insert(s[i]);
            }

            result +=
                intermediateChars.size(); 
        }

        return result;
    }
};