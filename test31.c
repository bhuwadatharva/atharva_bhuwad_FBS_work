#include <stdio.h>

int main()
{
    int arr1[4] = {5, 10, 15, 20};
    int maxFirst = 0;
    int maxSecond = 0;
    int n = sizeof(arr1) / sizeof(arr1[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] > maxFirst)
        {
            maxSecond = maxFirst;
            maxFirst = arr1[i];
        }
        else if (arr1[i] > maxSecond && arr1[i] != maxFirst)
        {
            maxSecond = arr1[i];
        }
    }
    printf("The second largest element is: %d\n", maxSecond);
    printf("The largest element is: %d\n", maxFirst);
}