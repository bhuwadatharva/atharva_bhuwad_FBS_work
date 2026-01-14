#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
}