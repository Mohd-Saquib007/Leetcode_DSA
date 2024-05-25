#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> largestDivisibleSubset(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> arr;
        int n = nums.size();
        arr.push_back(nums[0]);
        for (int i = 1; i < n; i++)
        {
            bool divisible = false;
            for (int j = 0; j < arr.size(); ++j)
            {
                if (arr[j] % nums[i] == 0 || nums[i] % arr[j] == 0)
                {
                    divisible = true;
                    break;
                }
                break;
            }
            if (divisible)
            {
                arr.push_back(nums[i]);
            }
        }
        return arr;
    }
};
