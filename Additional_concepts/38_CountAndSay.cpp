class Solution {
    public:
        string helper(string str) {
            int count = 1;
            string temp = "";
            int n = str.length();
            for (int i = n - 1; i > 0; i--) {
                if (str[i] != str[i - 1]) {
                    temp = to_string(count) + str[i] + temp;
                    count = 1;
                } else {
                    count++;
                }
            }
            temp = to_string(count) + str[0] + temp;
            return temp;
        }
        string countAndSay(int n) {
            if (n == 1) {
                return "1";
            }
            string ans = "1";
            while (n > 1) {
                cout << ans << " ";
                ans = helper(ans);
                n--;
            }
            return ans;
        }
    };