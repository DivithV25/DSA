class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> a;                  //STORING ALL THE ELEMENTS FREQUENCY IN MAPS 
        for(auto x:nums){
            a[x]++;
        }
        for(auto y:a){                             //CHOOSING THE ELEMENT WITH FREQUENCY ONE
            if(y.second==1){
            return y.first;
            }
        }
        return -1;
    }
};