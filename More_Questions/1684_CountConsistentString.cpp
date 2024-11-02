class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int count = 0;
        set<char> st;
        for (char c : allowed)
        {
            st.insert(c);
        }
        for (auto word : words)
        {
            bool flag = true;
            for (char c : word)
            {
                if (!st.count(c))
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                count++;
        }

        return count;
    }
};