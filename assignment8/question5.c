#include <stdio.h>

void alternate(int *arr, int n)
{
    for (int i = 0; i < n; i += 2)
        printf("%d ", *(arr + i));
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    alternate(arr, 5);
    return 0;
}
