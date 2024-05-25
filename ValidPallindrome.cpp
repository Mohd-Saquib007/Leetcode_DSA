#include <iostream>
#include <cstring>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        int length = s.size();
        int j = 0;
        while (j < s.size())
        {
            if ((s[j] >= 'A' && s[j] <= 'Z'))
            {
                s[j] = s[j] + 32;
            }
            if ((s[j] < 'a' || s[j] > 'z') && (s[j] < '0' || s[j] > '9'))
            {
                s.erase(s.begin() + j);
            }
            else
            {
                j++;
            }
        }
        length = s.size();
        for (int i = 0; i < length / 2; i++)
        {
            if (s[i] != s[length - i - 1])
            {
                return false;
            }
        }
        return true;
    }
};