#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        int normalOpen = 0;
        int normalClose = 0;
        int curlyOpen = 0;
        int curlyClose = 0;
        int sqOpen = 0;
        int sqClose = 0;
        for (int i = 0; i <= s.size(); i++)
        {
            if (s[i] == '(')
            {
                normalOpen++;
            }
            else if (s[i] == '{')
            {
                curlyOpen++;
            }
            else if (s[i] == '[')
            {
                sqOpen++;
            }
        }
        for (int i = 0; i <= s.size(); i++)
        {
            if (s[i] == ')')
            {
                normalClose++;
            }
            else if (s[i] == '}')
            {
                curlyClose++;
            }
            else if (s[i] == ']')
            {
                sqClose++;
            }
        }
        if ((normalOpen != normalClose) || (curlyOpen != curlyClose) && (sqOpen != sqClose))
        {
            return false;
        }
        return true;
    }
};