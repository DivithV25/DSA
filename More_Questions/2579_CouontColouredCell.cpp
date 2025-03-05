class Solution {
    public:
        long long recursionCall(int n) {
            if (n == 1)
                return 1;
            return recursionCall(n - 1) + 4 * (n - 1);
        }
        long long coloredCells(int n) { return recursionCall(n); }
    };