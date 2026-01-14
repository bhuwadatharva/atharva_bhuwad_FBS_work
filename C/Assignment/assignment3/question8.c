#include <stdio.h>

int main()
{
    int n = 145, temp, rem, i;
    int sum = 0, fact;

    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        fact = 1;
        for (i = 1; i <= rem; i++)
        {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }

    if (sum == n)
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}
