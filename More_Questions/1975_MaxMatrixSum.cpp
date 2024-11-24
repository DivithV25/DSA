class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {

        long long sum = 0, negative = 0, answer = INT_MAX;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                sum += abs(matrix[i][j]);
                if (matrix[i][j] < 0) {
                    negative++;
                }
                if (abs(matrix[i][j]) < answer) {
                    answer = abs(matrix[i][j]);
                }
            }
        }

        if (negative % 2 == 0) {
            return sum;
        } else
            return (sum - (answer * 2));
    }
};