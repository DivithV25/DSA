class Solution {
    public:
        string smallestPalindrome(string s) {
            sort(s.begin(), s.end());
            string front = "";
            string back = "";
            string mid = "";
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == s[i + 1]) {
                    front += s[i];
                    back += s[i];
                    i++;
                } else {
                    mid += s[i];
                }
            }
            reverse(back.begin(), back.end());
            return front + mid + back;
        }
    };