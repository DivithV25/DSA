class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        vector<int> uniqueArr(arr.begin(), arr.end());
        unordered_map<int, int> mp;

        sort(uniqueArr.begin(), uniqueArr.end());
        uniqueArr.erase(unique(uniqueArr.begin(), uniqueArr.end()),
                        uniqueArr.end());
        for (int i = 0; i < uniqueArr.size(); i++) {
            mp[uniqueArr[i]] = i;
        }
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = mp[arr[i]]+1;
        }
        return arr;
    }
};