#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    string multiply(string num1, string num2)
    {
        int l1 = num1.length();
        int l2 = num2.length();
        long long int result = 0;
        long long int sum = 0;
        for (int i = 0; i < l1; i++)
        {
            for (int j = l2 - 1; j >= 0; j--)
            {
                result = (num2[i] - '0') * (num1[j] - '0');
                result = result * 10;
                sum = result + sum;
            }
        }
        sum = sum / 10;
        return to_string(sum);
    }
};