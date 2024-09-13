class Solution {
public:
    bool isPalindrome(int x) {
           string str1=to_string(x);//converts the integer into a string
           return str1==string(str1.rbegin(),str1.rend());//creates a reverse string and compares it with original string
    }
};