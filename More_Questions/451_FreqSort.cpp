class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> frq;
        priority_queue<pair<int, char>> maxHeap;
        for (int i = 0; i < s.size(); i++) {
            frq[s[i]]++;
        }
        for (auto it : frq) {
            maxHeap.push({it.second, it.first});
        }
        string answer = "";
        while (!maxHeap.empty()) {
            auto x = maxHeap.top();
            maxHeap.pop();
            int k = x.first;
            char c = x.second;
            for (int i = 0; i < k; i++) {
                answer += c;
            }
        }
        return answer;
    }
};
