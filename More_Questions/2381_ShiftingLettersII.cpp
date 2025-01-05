class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int stringLength = s.size();
        vector<int> cumulativeShifts(stringLength + 1, 0);

        for (auto& shiftOperation : shifts) {
            int startIndex = shiftOperation[0];
            int endIndex = shiftOperation[1];
            int shiftDirection = shiftOperation[2];
            cumulativeShifts[startIndex] += (shiftDirection == 1 ? 1 : -1);
            cumulativeShifts[endIndex + 1] -= (shiftDirection == 1 ? 1 : -1);
        }

        int accumulatedShift = 0;
        for (int i = 0; i < stringLength; ++i) {
            accumulatedShift += cumulativeShifts[i];
            cumulativeShifts[i] = accumulatedShift;
        }

        for (int i = 0; i < stringLength; ++i) {
            int netShift = (cumulativeShifts[i] % 26 + 26) % 26;
            s[i] = 'a' + (s[i] - 'a' + netShift) % 26;
        }

        return s;
    }
};