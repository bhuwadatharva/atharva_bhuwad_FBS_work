#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d is even\n", arr[i]);
        }
        else
        {
            printf("%d is odd\n", arr[i]);
        }
    }
}