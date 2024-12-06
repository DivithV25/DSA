class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        set<int> st(banned.begin(), banned.end());
        int sum = 0;
        int i = 1;
        int count = 0;
        while (maxSum >= sum && i <= n) {
            if (!st.count(i) && sum + i <= maxSum) {
                sum += i;
                count++;
            }
            i++;
        }
        return count;
    }
};