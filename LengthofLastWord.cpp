#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int count = 0;
        for (int i = s.size() - 1; i >= 0 && s[i] == ' '; i--)
        {
            s.pop_back();
        }

        for (int i = s.size() - 1; i >= 0 && s[i] != ' '; i--)
        {

            count++;
        }
        return count;
    }
};