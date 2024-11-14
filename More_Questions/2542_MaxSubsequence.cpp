class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        vector<pair<int, int>> ans;
        for (int i = 0; i < nums1.size(); i++) {
            ans.push_back({nums1[i], nums2[i]});
        }
        sort(ans.begin(), ans.end(), [](pair<int, int> a, pair<int, int> b) {
            return a.second > b.second;
        });
        long long Ksum = 0;
        for (int i = 0; i <= k - 1; i++) {
            Ksum += ans[i].first;
            minHeap.push(ans[i].first);
        }
        long long result = Ksum * ans[k - 1].second;
        for (int i = k; i < nums1.size(); i++) {
            Ksum += ans[i].first - minHeap.top();
            minHeap.pop();
            minHeap.push(ans[i].first);

            result = max(result, Ksum * ans[i].second);
        }

        return result;
    }
};