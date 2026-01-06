#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return 0;
    return 1;
}

void printPrimes(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        if (isPrime(*(arr + i)))
            printf("%d ", *(arr + i));
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printPrimes(arr, 5);
    return 0;
}
