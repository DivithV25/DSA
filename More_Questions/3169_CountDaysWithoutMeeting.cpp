class Solution {
    public:
        int countDays(int days, vector<vector<int>>& meetings) {
    
            sort(meetings.begin(), meetings.end());
    
            int count = 0;
            count = meetings[0][0] - 1;
    
            int maxNum = meetings[0][1];
            for (int i = 1; i < meetings.size(); i++) {
                if (meetings[i][0] > maxNum) {
                    count += (meetings[i][0] - maxNum) - 1;
                }
                maxNum = max(meetings[i][1], maxNum);
            }
            count += (days - maxNum);
            return count;
        }
    };