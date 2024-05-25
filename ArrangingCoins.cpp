#include <iostream>
using namespace std;
class Solution
{
public:
    int arrangeCoins(int n)
    {
        long long int count = 0;
        long long int k = 1;

        while (n >= k)
        {
            n = n - k;
            k++;
            count++;
        }

        return count;
    }
};
