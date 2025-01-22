class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int rows = isWater.size();
        int cols = isWater[0].size();
        vector<vector<int>> heights(rows, vector<int>(cols, rows + cols));
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                if (isWater[row][col] == 1) {
                    heights[row][col] = 0; 
                } else {
                    if (row > 0) 
                        heights[row][col] = min(heights[row][col], heights[row - 1][col] + 1);
                    if (col > 0) 
                        heights[row][col] = min(heights[row][col], heights[row][col - 1] + 1); 
                }
            }
        }

        for (int row = rows - 1; row >= 0; row--) {
            for (int col = cols - 1; col >= 0; col--) {
                if (row < rows - 1) 
                    heights[row][col] = min(heights[row][col], heights[row + 1][col] + 1); 
                if (col < cols - 1) 
                    heights[row][col] = min(heights[row][col], heights[row][col + 1] + 1);
            }
        }

        return heights;
    }
};