#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in array: ");
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            printf("%d ", arr[i]);
        }
    }
}
