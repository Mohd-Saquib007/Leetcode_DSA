#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        int row_length = matrix.size();
        int col_length = matrix[0].size();
        vector<vector<int>> result(col_length, vector<int>(row_length, 0));
        for (int i = 0; i < row_length; i++)
        {
            for (int j = 0; j < col_length; j++)
            {
                result[j][i] = matrix[i][j];
            }
        }
        return result;
    }
};
