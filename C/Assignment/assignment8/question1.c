#include <stdio.h>

void findMinMax(int *arr, int n)
{
    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) < min)
            min = *(arr + i);
        if (*(arr + i) > max)
            max = *(arr + i);
    }
    printf("Min = %d\nMax = %d\n", min, max);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    findMinMax(arr, 5);
    return 0;
}
