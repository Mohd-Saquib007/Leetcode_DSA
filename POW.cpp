#include <iostream>
using namespace std;
class Solution
{
private:
    double power(double x, int n)
    {
        if (n == 0)
        {
            return 1;
        }
        return x * power(x, n - 1);
    }

public:
    double myPow(double x, int n)
    {
        double num = 1;
        if (n >= 0)
        {
            num = power(x, n);
        }
        else
        {
            n = -n;
            num = power(x, n);
            num = 1.0 / num;
        }
        return num;
    }
};