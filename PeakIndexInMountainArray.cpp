#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        while (s < e)
        {
            long long int mid = s + (e - s) / 2;
            if (arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }
            else if (arr[mid] > arr[mid + 1])
            {
                e = mid;
            }
        }
        return e;
    }
};