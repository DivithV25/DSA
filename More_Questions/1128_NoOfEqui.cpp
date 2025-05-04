class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
              map<pair<int, int>, int> mp;
                int count = 0;
                for(auto& n : dominoes){
                    if(n[0] > n[1]) swap(n[0], n[1]);
                    count += mp[make_pair(n[0], n[1])]++;
                }
                return count;
        }
    };