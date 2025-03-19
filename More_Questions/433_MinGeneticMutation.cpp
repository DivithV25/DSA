class Solution {
    public:
        int minMutation(string startGene, string endGene, vector<string>& bank) {
            unordered_set<string> st(bank.begin(), bank.end());
            unordered_set<string> visited;
            queue<string> q;
            visited.insert(startGene);
            q.push(startGene);
            int count = 0;
            while (!q.empty()) {
                int n = q.size();
                while (n--) {
                    string curr = q.front();
                    q.pop();
                    if (curr == endGene) {
                        return count;
                    }
                    for (char ch : "ACGT") {
                        for (int i = 0; i < curr.length(); i++) {
                            string oneChange = curr;
                            oneChange[i] = ch;
                            if (st.count(oneChange) && !visited.count(oneChange)) {
                                q.push(oneChange);
                                visited.insert(oneChange);
                            }
                        }
                    }
                }
                count++;
            }
            return -1;
        }
    };