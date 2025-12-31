#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int brr[] = {1, 6, 7, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(brr) / sizeof(brr[0]);

    printf("Common elements are: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i] == brr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
}