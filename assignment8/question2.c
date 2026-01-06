#include <stdio.h>

void search(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) == key)
        {
            printf("Element found at index %d\n", i);
            return;
        }
    }
    printf("Element not found\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    search(arr, 5, 3);
    return 0;
}
