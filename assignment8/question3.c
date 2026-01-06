#include <stdio.h>

void sumArray(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += *(arr + i);
    printf("Sum = %d\n", sum);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    sumArray(arr, 5);
    return 0;
}
