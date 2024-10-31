class Solution {
public:
    long long minCost(vector<int>& robot, int rob_pos, vector<int>& fact, int fact_pos, vector<vector<long long>>& t) {
        if (rob_pos < 0)
            return 0;
        if (fact_pos < 0)
            return 10000000000000LL;

        if (t[rob_pos][fact_pos] != -1) {
            return t[rob_pos][fact_pos];
        }
        long long include = abs(robot[rob_pos] - fact[fact_pos]) +
                            minCost(robot, rob_pos - 1, fact, fact_pos - 1, t);
        long long exclude = minCost(robot, rob_pos, fact, fact_pos-1, t);

        return t[rob_pos][fact_pos] = min(include, exclude);
    }
    long long minimumTotalDistance(vector<int>& robot,
                                   vector<vector<int>>& factory) {
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());

        vector<int> fact;
        for (int i = 0; i < factory.size(); i++) {
            int pos = factory[i][0];
            int count = factory[i][1];
            for (int j = 0; j < count; j++) {
                fact.push_back(pos);
            }
        }
        vector<vector<long long>> t(robot.size(),vector<long long>(fact.size(), -1));
        return minCost(robot, robot.size() - 1, fact, fact.size() - 1, t);
    }
};