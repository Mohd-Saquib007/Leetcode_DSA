#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
    {
        if (index >= nums.size())
        {
            ans.push_back(output);
            return;
        }
        solve(nums, output, index + 1, ans);
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index + 1, ans);
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};