class Solution {
public:
    int trib(int n, vector<int>& result) {
        if (result[n] != -1) {
            return result[n];
        }
        if (n == 0) {
            return 0;
        }
        if (n == 1 || n == 2) {
            return 1;
        }
        return result[n] = (trib(n - 1, result) + trib(n - 2, result) +
                            trib(n - 3, result));
    }
    int tribonacci(int n) {
        vector<int> result(n + 1, -1);
        return trib(n, result);
    }
};