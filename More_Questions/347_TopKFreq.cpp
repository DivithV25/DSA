class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> answer;
        unordered_map<int,int> frq;
        priority_queue<pair<int,int>> maxHeap;
        for(int i=0;i<nums.size();i++){
            frq[nums[i]]++;
        }
        for(auto it:frq){
            maxHeap.push({it.second,it.first});
        }
        for(int i=0;i<k;i++){
            auto x=maxHeap.top();
            answer.push_back(x.second);
            maxHeap.pop();

        }
     return answer;
    }
};