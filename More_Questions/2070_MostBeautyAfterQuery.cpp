class Solution
{
public:
    int binarySearch(vector<vector<int>> &vec, int key)
    {
        int low = 0;
        int high = vec.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (vec[mid][0] == key)
            {
                return mid;
            }
            else if (vec[mid][0] > key)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return high;
    }
    vector<int> maximumBeauty(vector<vector<int>> &items,
                              vector<int> &queries)
    {
        sort(items.begin(), items.end(), [](vector<int> &a, vector<int> &b)
             {
            if (a[0] == b[0]) {
                return a[1] > b[1];
            }
            return a[0] < b[0]; });

        int maxBeauty = 0;
        for (int i = 0; i < items.size(); i++)
        {
            maxBeauty = max(maxBeauty, items[i][1]);
            items[i][1] = maxBeauty;
        }

        vector<int> answer;
        for (int query : queries)
        {
            int index = binarySearch(items, query);
            if (index >= 0)
            {
                answer.push_back(items[index][1]);
            }
            else
            {
                answer.push_back(0);
            }
        }

        return answer;
    }
};