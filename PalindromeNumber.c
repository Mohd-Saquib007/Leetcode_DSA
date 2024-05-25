bool isPalindrome(int x)
{
    int num = x;
    if (x < 0)
        return false;
    long long int sum = 0;
    int i;
    while (x > 0)
    {
        i = x % 10;
        x = x / 10;
        sum = sum + i;
        sum = sum * 10;
    }
    sum = sum / 10;
    if (sum == num)
        return true;
    else
        return false;
}