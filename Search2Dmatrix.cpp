#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row_length = matrix.size();
        if (row_length == 0)
        {
            return false;
        }
        int col_length = matrix[0].size();
        int s = 0;
        int k = col_length - 1;

        while (s < row_length && k >= 0)
        {
            if (matrix[s][k] == target)
            {
                return true;
            }
            else if (matrix[s][k] < target)
            {
                s++;
            }
            else
            {
                k--;
            }
        }
        return false;
    }
};
