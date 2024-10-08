class Solution
{
public:
    int minSwaps(string s)
    {
        // stack<char> st;
        int size = 0;
        for (char &c : s)
        {
            if (c == '[')
            {
                // st.push(c);
                size++;
            }
            else if (size > 0)
            {
                // st.pop();
                size--;
            }
        }

        int result = (size + 1) / 2;
        return result;
    }
};