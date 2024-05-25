#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int val = nums[0];
        int count = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == val)
            {
                count++;
            }
            else
            {
                count--;
                if (count == 0)
                {
                    val = nums[i];
                    count = 1;
                }
            }
        }
        return val;
    }
};