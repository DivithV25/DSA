class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums[0] == 0 || nums.size() == 1)
            return 0;
        int mx = 0, ans = 1, jump = nums[0];
        for (int i = 1; i < nums.size() - 1; i++) {
            mx--;
            jump--;
            mx = max(mx, nums[i]);
            if (!jump && i != nums.size() - 1) {
                if (mx < 0)
                    return 0;
                jump = mx;
                mx = 0;
                ans++;
            }
        }
        return ans;
    }
}

;