class Solution {
public:
    int sumofdigits(string &num_str) {
    return accumulate(num_str.begin(), num_str.end(), 0, [](int sum, char digit) {   //A FUNCTION TO GET SUM OF DIGITS WHICH IS A STRING
        return sum + (digit - '0'); // Convert char to int and sum
    });
    }
    int getLucky(string s, int k) {
        string num_str = "";
        for (char c : s) {
            int pos = c - 'a' + 1;                                                 //COVERTING ACCORDING TO THE POSITIONS OF ALPHABETS
            num_str += to_string(pos);                     
        }
        for (int i = 0; i < k; i++) {
            int sum = sumofdigits(num_str);
            num_str = to_string(sum);
        }
        return stoi(num_str);
    }
};