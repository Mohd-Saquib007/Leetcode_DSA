#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
    {
        int i = 0;
        int j = 0;
        while (i < m && j < n)
        {
            if (nums1[i] == 0)
            {
                nums1[i] = nums2[j];
                i++;
                j++;
            }
            else if (nums1[i] > nums2[j])
            {
                for (int k = m + n - 1; k > i; k--)
                {
                    nums1[k] = nums1[k - 1];
                }
                nums1[i] = nums2[j];
                i++;
                j++;
                m++;
            }
            else
            {
                i++;
            }
        }
        while (j < n)
        {
            nums1[i++] = nums2[j++];
        }
    }
};