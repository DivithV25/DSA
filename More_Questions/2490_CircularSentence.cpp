class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> answer;
        istringstream ss(sentence);
        string item;
        while (ss >> item) {
            answer.push_back(item);
        }
        int len = answer.size();
        for (int i = 0; i < len; i++) {
            string first = answer[i];
            string second = answer[(i + 1) % len];
            int n = answer[i].size();
            if (first[n - 1] != second[0]) {
                return false;
            }
        }
        return true;
    }
};