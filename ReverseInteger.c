int reverse(int x)
{
    long long int sum = 0;
    while (x != 0)
    {
        int i = x % 10;
        x = x / 10;
        sum = sum + i;
        sum = sum * 10;
    }
    sum = sum / 10;
    if (sum < -2147483648 || sum > 2147483647)
        return 0;
    return sum;
}