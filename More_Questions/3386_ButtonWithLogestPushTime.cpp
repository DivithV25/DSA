class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int maxtime=events[0][1];
        int result=events[0][0];
        for(int i=1;i<events.size();i++){
            int p=events[i][1]-events[i-1][1];
            if(p>maxtime || (p==maxtime && events[i][0]<result)){
                maxtime=p;
                result=events[i][0];
            }
        }
        return result;
    }
};