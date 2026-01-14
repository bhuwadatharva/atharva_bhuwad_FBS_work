#include <stdio.h>

int sum();

int main()
{
    int result = sum();
    printf("Sum = %d", result);
    return 0;
}

int sum()
{
    int a = 10, b = 20;
    int sum = a + b;
    return sum;
}
