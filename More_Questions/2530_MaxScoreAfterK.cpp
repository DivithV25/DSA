class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<long long> maxHeap(nums.begin(),nums.end());//Heapify O(n)
      
        long long sum = 0;
        for (int i = 1; i <= k; i++) {

            long long num = maxHeap.top();
            maxHeap.pop();
            sum += num;
            num =  ceil(num / 3.0);   //MAKE THIS FLOAT TO SO THAT (10/3) IS NOT INTEGER
            maxHeap.push(num);
        }
        return sum;
    }
};