#include <cstring>
class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int count = 0;
        for (int i = 0; i < text1.size(); i++)
        {
            for (int j = 0; j < text2.size(); j++)
            {
                if (text1[i] == text2[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};