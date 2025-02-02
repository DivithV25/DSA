class Solution {
public:
    int maxDistance(string s, int k) {
        vector<int> ans;
        int nCount = 0, wCount = 0, eCount = 0, sCount = 0;
        for (char c : s) {
            if (c == 'N') {
                nCount++;
            } else if (c == 'E') {
                eCount++;

            } else if (c == 'W') {
                wCount++;

            } else {
                sCount++;
            }

            int vertMax = max(nCount, sCount);
            int vertMin = min(nCount, sCount);
            int horzMax = max(wCount, eCount);
            int horzMin = min(wCount, eCount);

            int p = min(vertMin + horzMin, k);
            ans.push_back(vertMax + horzMax - vertMin - horzMin + 2 * p);
        }
        int result = 0;
        for (int i : ans) {
            result = max(result, i);
        }
        return result;
    }
};