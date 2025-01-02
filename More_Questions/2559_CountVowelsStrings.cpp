class Solution {
public:
    vector<int> vowelStrings(vector<string>& words,
                             vector<vector<int>>& queries) {
        int len = words.size();
        vector<int> mem(len + 1, 0);
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

        for (int i = 0; i < len; ++i) {
            if (vowels.count(words[i].front()) &&
                vowels.count(words[i].back())) {
                mem[i + 1] = 1;
            } else {
                mem[i + 1] = 0;
            }
        }
        for (int i = 1; i <= len; ++i) {
            mem[i] += mem[i - 1];
        }
        vector<int> ans(queries.size());
        for (int i = 0; i < queries.size(); ++i) {
            ans[i] = mem[queries[i][1] + 1] - mem[queries[i][0]];
        }

        return ans;
    }
};