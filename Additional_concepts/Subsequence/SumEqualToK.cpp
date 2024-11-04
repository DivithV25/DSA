class Solution {
public:
    int count = 0;
    void SubArrayCount(int idx, vector<int>& nums, vector<int>& arr, int k,
                       int sum) {
        if (idx == nums.size()) {
            if (sum == k) {
              for(auto i:arr){
                cout<<i<<" ";
              }
            }
            return;
        }
        arr.push_back(nums[idx]);
        sum += nums[idx];
        SubArrayCount(idx + 1, nums, arr, k, sum);
        arr.pop_back();
        sum -= nums[idx];
        SubArrayCount(idx + 1, nums, arr, k, sum);
    }
    int subarraySum(vector<int>& nums, int k) {
        vector<int> arr;
        SubArrayCount(0,nums,arr,k,0);
        return count;
    }
};