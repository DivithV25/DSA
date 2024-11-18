class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> answer(n, 0);
        if (k == 0)
            return answer;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            if (k > 0) {
                for (int cnt = 1; cnt <= k; cnt++) {
                    sum += code[(i + cnt) % n];
                }
            } else {
                for (int cnt = 1; cnt <= abs(k); cnt++) {
                    sum += code[(i - cnt + n) % n];
                }
            }
            answer[i] = sum;
        }
        return answer;
    }
};