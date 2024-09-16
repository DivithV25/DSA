class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();
        vector<int> minutes;
        for (int i = 0; i < n; i++) {
            string time=timePoints[i];

            string hourstr=time.substr(0,2);
            string minutestr=time.substr(3);

            int hourint=stoi(hourstr);
            int minuteint=stoi(minutestr);
            minutes.push_back((hourint*60+minuteint));

        }
        sort(minutes.begin(),minutes.end());

        int result=INT_MAX;
        for(int i=1;i<n;i++){
            result=min(result,minutes[i]-minutes[i-1]);

        }
        return min(result,(24*60-minutes[n-1])+minutes[0]);
    }
};