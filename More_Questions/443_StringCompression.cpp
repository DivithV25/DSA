class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;
        int i = 0;
        int n = chars.size();
        while (i < n) {
            char curr_char = chars[i];
            int count = 0;

            while (i < n && chars[i] == curr_char) {
                i++;
                count++;
            }
            chars[index++] = curr_char;
            if (count > 1) {
                string count_str = to_string(count);
                for (char& ch : count_str) {
                    chars[index++] = ch;
                }
            }
        }
        return index;
    }
};