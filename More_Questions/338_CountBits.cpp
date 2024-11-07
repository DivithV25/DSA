class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> answer;
        for(int i=0;i<=n;i++){
            int count=__builtin_popcount(i);
            answer.push_back(count);
        }
        return answer;
    }
};