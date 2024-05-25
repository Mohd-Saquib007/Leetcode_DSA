#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int length = nums.size();
        int i = 0;
        while (k > i)
        {
            nums[i] = nums[length - i];
            nums.erase(nums.end());
            i++;
        }
    }
};