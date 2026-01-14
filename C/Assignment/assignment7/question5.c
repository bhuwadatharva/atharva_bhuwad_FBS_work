#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int i = 0;
    while (i < n)
    {
        printf("%d\n", arr[i]);
        i += 2;
    }
}