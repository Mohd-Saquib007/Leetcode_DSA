#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    std::vector<int> plusOne(std::vector<int> &digits)
    {
        int length = digits.size() - 1;
        for (int i = length; i >= 0; i--)
        {
            digits[i] = digits[i] + 1;
            if (digits[i] != 10)
            {
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};