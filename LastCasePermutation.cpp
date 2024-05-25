#include <iostream>
#include <vector>
using namespace std;
class Solution
{
private:
    void solve(vector<string> &s, vector<int> &output, int index, vector<vector<int>> &ans)
    {
        if (index >= s.size())
        {
            ans.push_back(output);
            return;
        }
        int i = 0;
        while (i < s[index].size())
        {
            if (s[index][i] >= 'a' && s[index][i] <= 'z')
            {
                output.push_back(s[index][i]);
                solve(s, output, index + 1, ans);
                output.pop_back();
            }
            else if (s[index][i] >= 'A' && s[index][i] <= 'Z')
            {
                output.push_back(s[index][i]);
                solve(s, output, index + 1, ans);
                output.pop_back();
            }
            i++;
        }
        solve(s, output, index + 1, ans);
    }

public:
    vector<vector<int>> letterCasePermutation(string s)
    {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(s, output, index, ans);
        return ans;
    }
};