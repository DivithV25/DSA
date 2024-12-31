class Solution
{
public:
    int mincostTickets(vector<int> &days, vector<int> &costs)
    {
        vector<int> costUntilDay(366, 0);
        unordered_set<int> travelDaysSet(days.begin(), days.end());

        for (int currentDay = 1; currentDay <= 365; ++currentDay)
        {
            if (travelDaysSet.find(currentDay) == travelDaysSet.end())
            {
                costUntilDay[currentDay] = costUntilDay[currentDay - 1];
            }
            else
            {
                costUntilDay[currentDay] = min({costUntilDay[currentDay - 1] + costs[0],
                                                costUntilDay[max(0, currentDay - 7)] + costs[1],
                                                costUntilDay[max(0, currentDay - 30)] + costs[2]});
            }
        }

        return costUntilDay[365];
    }
};