class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        int n = s1.length();
        int m = s2.length();
        if (n > m)
        {
            return false;
        }
        vector<int> s1_freq(26, 0);
        vector<int> s2_freq(26, 0);
        for (auto &ch : s1)
        {
            s1_freq[ch - 'a']++;
        }

        int i = 0;
        int j = 0;
        while (j < m)
        {
            s2_freq[s2[j] - 'a']++;
            if (j - i + 1 > n)
            {
                s2_freq[s2[i++] - 'a']--;
            }
            if (s1_freq == s2_freq)
            {
                return true;
            }
            j++;
        }

        return false;
    }
};