#include <iostream>
#include <cstring>
using namespace std;
class Solution
{
public:
    int firstUniqChar(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i + 1; j < s.size(); i++)
            {
                if (s[i] != s[j])
                {
                    return i;
                }
            }
        }
        return -1;
    }
};