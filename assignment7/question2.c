#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int beg = 0;
    int end = 4;
    int ele = 3;
    while (beg < end)
    {
        int mid = (beg + end) / 2;
        if (arr[mid] == ele)
        {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if (arr[mid] < ele)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}