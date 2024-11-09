class Solution
{
public:
    int smallestNumber(int n, int t)
    {
        for (int i = n; i <= 100; i++)
        {
            int product = 1;
            int m = i;
            while (m > 0)
            {
                int num = m % 10;
                product *= num;
                m /= 10;
            }
            if (((product) % t) == 0)
            {
                return i;
            }
        }

        return -1;
    }
};