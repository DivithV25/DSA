class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();
        long long sum = 0;
        int teamskill = skill[0] + skill[n - 1];
        for (int i = 0; i < n / 2; i++) {
            int currentskill = skill[i] + skill[n - 1 - i];
            if (currentskill != teamskill) {
                return -1;
            }
            sum += 1LL * skill[i] * skill[n - 1 - i];
        }
        return sum;
    }
};