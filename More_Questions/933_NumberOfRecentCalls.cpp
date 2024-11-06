class RecentCounter
{
public:
    vector<int> counter;

    RecentCounter() {}

    int ping(int t)
    {
        counter.push_back(t);
        int count = 0;
        for (auto i : counter)
        {
            if (i >= t - 3000)
            {
                count++;
            }
        }
        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */