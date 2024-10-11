class Solution {
public:
    typedef pair<int, int> P;
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n = times.size();
        int chair = 0;
        int targetFriendArrival = times[targetFriend][0];
        priority_queue<P, vector<P>, greater<P>>
            occupied; //{departure,chairNo}
        priority_queue<int, vector<int>, greater<int>> free; //{chairNo}
        sort(times.begin(), times.end());
        for (int i = 0; i < n; i++) {
            int arrivaltime = times[i][0];
            int departuretime = times[i][1];
            while (!occupied.empty() && occupied.top().first <= arrivaltime) {
                free.push(occupied.top().second);
                occupied.pop();
            }
            if (free.empty()) {
                occupied.push({departuretime, chair});
                if (arrivaltime == targetFriendArrival)
                    return chair;
                chair++;
            } else {
                if (arrivaltime == targetFriendArrival) {
                    return free.top();
                }
                occupied.push({departuretime, free.top()});
                free.pop();
            }
        }
        return -1;
    }
};