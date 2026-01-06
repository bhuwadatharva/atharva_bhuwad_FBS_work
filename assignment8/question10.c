#include <stdio.h>

void sort(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {5, 3, 1, 4, 2};
    sort(arr, 5);

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
