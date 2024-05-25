// Unsolved and must be done by O(nlog(n)) complexity. And in this case it is done by Olog(n**2) complexity.
class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] < nums[i])
                {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }
    for (int l = 0; l < nums.size(); l++)
    {
        return nums[l];
    }
};