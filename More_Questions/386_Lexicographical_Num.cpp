class Solution {
public:
    void solve(int curr, int n, vector<int>& result) {
        if (curr > n) {
            return;
        }
        result.push_back(curr);
        for (int append = 0; append <= 9; append++) {
            int newnum = curr * 10 + append;
            if (newnum > n)
                return;
            solve(newnum, n, result);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> result;
        for (int startNum = 1; startNum <= 9; startNum++) {
            solve(startNum, n, result);
        }
        return result;
    }
};