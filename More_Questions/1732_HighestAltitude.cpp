class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currAltitude = 0, highestAltitude = 0;
        for (int height : gain) {
            currAltitude += height;
            highestAltitude = max(highestAltitude, currAltitude);
        }
        return highestAltitude;
    }
};