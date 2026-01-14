#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
    if (n < 2)

        for (int i = 2; i <= n / 2; i++)
            if (n % i == 0)

                return 1;
}

int main()
{
    int n, i;
    int *arr;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Prime numbers: ");
    for (i = 0; i < n; i++)
        if (isPrime(arr[i]))
            printf("%d ", arr[i]);
}
