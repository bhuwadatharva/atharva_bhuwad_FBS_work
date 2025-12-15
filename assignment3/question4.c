#include <stdio.h>

int main()
{
    int n = 7, i, flag = 1;

    if (n <= 1)
        flag = 0;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
