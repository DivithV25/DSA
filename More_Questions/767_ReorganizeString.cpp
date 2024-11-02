class Solution
{
public:
    string reorganizeString(string s)
    {
        unordered_map<char, int> map;
        for (char c : s)
        {
            map[c]++;
        }
        priority_queue<pair<int, char>> maxHeap;
        for (auto it : map)
        {
            maxHeap.push({it.second, it.first});
        }
        string result;
        pair<int, char> prev = {0, ' '};
        while (!maxHeap.empty())
        {
            auto current = maxHeap.top();
            result += current.second;
            maxHeap.pop();
            if (prev.first > 0)
            {
                maxHeap.push(prev);
            }
            current.first--;
            prev = current;
        }
        return result.length() == s.length() ? result : "";
    }
};