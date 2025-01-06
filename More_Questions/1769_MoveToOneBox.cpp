class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> answer;
        for (int i = 0; i < boxes.size(); i++) {
            int count = 0;
            for (int j = 0; j < boxes.size(); j++) {
                if (boxes[j] == '1') {
                    count += abs(j - i);
                }
            }
            answer.push_back(count);
        }
        return answer;
    }
};