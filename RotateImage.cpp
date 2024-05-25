#include <vector>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int row_length = matrix.size();
        int col_length = matrix[0].size();
        for (int i = 0; i < row_length; i++)
        {
            for (int j = i; j < col_length; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < row_length; i++)
        {
            for (int j = 0; j < col_length / 2; j++)
            {
                swap(matrix[i][j], matrix[i][col_length - 1 - j]);
            }
        }
    }
};
