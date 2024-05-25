#include <iostream>
#include <vector>
using namespace std;
class Solution
{
private:
    void solve(vector<int> &nums, vector<vector<int>> &ans, int index)
    {
        if (index > nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[index], nums[i]);
            ans.push_back(nums);
            solve(nums, ans, index + 1);
            swap(nums[index], nums[i]);
        }
        sort(nums.begin(), nums.end());
        auto duplicate = unique(nums.begin(), nums.end());
        nums.erase(duplicate, nums.end());
    }

public:
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};