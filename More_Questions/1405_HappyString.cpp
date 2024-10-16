class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>> maxHeap;
        if (a > 0)
            maxHeap.push({a, 'a'});
        if (b > 0)
            maxHeap.push({b, 'b'});
        if (c > 0)
            maxHeap.push({c, 'c'});

        string result = "";
        while (!maxHeap.empty()) {
            auto [FirstCount, FirstChar] = maxHeap.top();
            maxHeap.pop();
            if (result.size() >= 2 && result.back() == FirstChar &&
                result[result.size() - 2] == FirstChar) {
                if (maxHeap.empty()) {
                    break;
                }
                auto [SecondCount, SecondChar] = maxHeap.top();
                maxHeap.pop();
                result += SecondChar;
                SecondCount--;
                if (SecondCount > 0) {
                    maxHeap.push({SecondCount, SecondChar});
                }
                maxHeap.push({FirstCount, FirstChar});

            } else {

                result += FirstChar;
                FirstCount--;
                if (FirstCount > 0) {
                    maxHeap.push({FirstCount, FirstChar});
                }
            }
        }

        return result;
    }
};