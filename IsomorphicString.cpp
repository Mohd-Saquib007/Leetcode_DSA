#include <iostream>
#include <cstring>
using namespace std;
class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[i] == s[j])
                {
                    count1++;
                }
            }
        }
        for (int i = 0; i < t.size(); i++)
        {
            for (int j = i + 1; j < t.size(); j++)
            {
                if (t[i] == t[j])
                {
                    count2++;
                }
            }
        }
        if (s.size() == t.size() && count1 == count2)
        {
            return true;
        }
        return false;
    }
};