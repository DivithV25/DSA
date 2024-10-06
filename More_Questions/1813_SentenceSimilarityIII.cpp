class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        if (sentence1.length() < sentence2.length())
            swap(sentence1, sentence2);
        deque<string> dq1, dq2;
        stringstream ss(sentence1);
        stringstream ss1(sentence2);
        string item1;
        while (ss >> item1) {
            dq1.push_back(item1);
        }
        while (ss1 >> item1) {
            dq2.push_back(item1);
        }

        while (!dq1.empty() && !dq2.empty() && dq1.front() == dq2.front()) {
            dq1.pop_front();
            dq2.pop_front();
        }
        while (!dq1.empty() && !dq2.empty() && dq1.back() == dq2.back()) {
            dq1.pop_back();
            dq2.pop_back();
        }

        return dq2.empty();
    }
};