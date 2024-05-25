#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (divisor == 0)
        {
            return INT_MAX;
        }
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        if (dividend > 0 && divisor > 0)
        {
            return dividend / divisor;
        }
        if (dividend < 0 && divisor < 0)
        {
            return dividend / divisor;
        }
        else if (dividend < 0 || divisor < 0)
        {
            int ans = dividend / divisor;
            if (dividend % divisor != 0)
            {
                return ans;
            }
        }
        return 0;
    }
};