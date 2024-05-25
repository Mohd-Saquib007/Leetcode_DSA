int maxArea(int *height, int heightSize)
{
    int area;
    int maxArea = 0;
    int left = 0;
    int right = heightSize - 1;
    while (left < right)
    {
        if (height[left] > height[right])
        {
            area = height[right] * (right - left);
            right--;
        }
        else
        {
            area = height[left] * (right - left);
            left++;
        }
        if (area > maxArea)
        {
            maxArea = area;
        }
    }
    return maxArea;
}