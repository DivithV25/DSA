class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
          vector<vector<bool>> isPrerequisite(numCourses, vector<bool>(numCourses, false));
        
        for (const vector<int>& vec : prerequisites) {
            isPrerequisite[vec[0]][vec[1]] = true;
        }

        for (int k = 0; k < numCourses; k++) {
            for (int i = 0; i < numCourses; i++) {
                for (int j = 0; j < numCourses; j++) {
                    if (isPrerequisite[i][k] && isPrerequisite[k][j]) {
                        isPrerequisite[i][j] = true;
                    }
                }
            }
        }

        vector<bool> answer;
        for (const vector<int>& query : queries) {
            answer.push_back(isPrerequisite[query[0]][query[1]]);
        }

        return answer;
    }
};