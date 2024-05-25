#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        int count = 0;
        for (int i = 0; i < g.size(); i++)
        {
            for (int j = 0; j < s.size(); j++)
            {
                if (s[i] == s[j])
                {
                    count++;
                    s.erase(s.begin() + j);
                }
            }
        }
        return count;
    }
};