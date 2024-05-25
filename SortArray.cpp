// Also solve this problem without using any in built function of O(nlog(n)) time-complexity.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return nums;
    }
};