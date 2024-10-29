class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> Heap(nums.begin(),nums.end());
        int n=Heap.size();
        while(n>k){
            Heap.pop();
            n--;
        }
        return Heap.top();
    }
};