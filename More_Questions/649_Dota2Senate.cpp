class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> Rad;
        queue<int> Dir;
        int n = senate.length();
        for (int i = 0; i < n; i++) {
            senate[i] == 'R' ? Rad.push(i) : Dir.push(i);
        }
        while (!Rad.empty() && !Dir.empty()) {
            int rNum = Rad.front();
            int dNum = Dir.front();
            Rad.pop();
            Dir.pop();
            rNum < dNum ? Rad.push(n + rNum) : Dir.push(n + dNum);
        }
        return !Rad.empty() ? "Radiant" : "Dire";
    }
};
