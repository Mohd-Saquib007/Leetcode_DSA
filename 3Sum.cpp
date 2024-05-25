#include <iostream>
using namespace std;
int threeSum(int arr[])
{
    int i, sum = 0;
    while (sum == 0)
    {
        sum = sum + arr[i];
        i++;
        return arr[i];
    }
}
int main()
{
    int arr[6] = {-1, 0, 1, 2, -1, -4};
    int result = threeSum(arr);
    cout << "values are: " << result << endl;
    return 0;
}