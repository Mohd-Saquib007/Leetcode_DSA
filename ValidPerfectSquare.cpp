#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        long long int s = 0;
        long long int e = num;
        long long int ans = 0;
        while (s < e)
        {
            long long int mid = s + (e - s) / 2;
            if ((e - s) / 2 != 0)
            {
                return false;
            }
            else
            {
                return false;
            }
            if (mid * mid > num)
            {
                e = mid - 1;
            }
            else if (mid * mid < num)
            {
                s = mid + 1;
                ans = mid;
            }
        }
    }
};