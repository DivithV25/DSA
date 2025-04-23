class Solution {
    public:
        int countLargestGroup(int n) {
            unordered_map<int, vector<string>> mp;
            for (int i = 1; i <= n; i++) {
                string num = to_string(i);
                int total = 0;
                for (char c : num) {
                    total += (c - '0');
                }
                mp[total].push_back(num);
            }
            int maxS = 0;
            for (auto it : mp) {
                int x = (it.second).size();
                maxS = max(maxS, x);
            }
            int count = 0;
            for (auto itt : mp) {
                int x = (itt.second).size();
                if (x == maxS) {
                    count++;
                }
            }
            return count;
        }
    };