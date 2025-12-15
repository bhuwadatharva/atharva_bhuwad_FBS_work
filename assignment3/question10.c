#include <stdio.h>

int main()
{
    int n = 12345;
    int first, last;

    last = n % 10;

    while (n >= 10)
    {
        n /= 10;
    }
    first = n;

    printf("%d", first + last);
    return 0;
}
