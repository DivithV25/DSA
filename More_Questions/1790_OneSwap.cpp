class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1.length() != s2.length()) {
            return false;
        }
        if (s1 == s2) {
            return true;
        }
        int inPlace = 0;
        vector<int> misPlaced;
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] == s2[i]) {
                inPlace++;
            } else {
                misPlaced.push_back(i);
            }
        }
        if ((s1.length() - inPlace) == 2) {
            if ((s1[misPlaced[0]] == s2[misPlaced[1]]) && (s2[misPlaced[0]] == s1[misPlaced[1]])) {
                return true;
            }
        }
        return false;
    }
};