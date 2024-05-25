#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int length = nums.size();
        int arr[length];
        int l = 0;
        for (int i = 0; i < length; i++)
        {
            if (nums[i] == 0)
            {
                arr[l] = nums[i];
                l++;
            }
        }
        for (int i = 0; i < length; i++)
        {
            if (nums[i] == 1)
            {
                arr[l] = nums[i];
                l++;
            }
        }
        for (int i = 0; i < length; i++)
        {
            if (nums[i] == 2)
            {
                arr[l] = nums[i];
                l++;
            }
        }
        for (int i = 0; i < length; i++)
        {
            nums[i] = arr[i];
        }
    }
};
