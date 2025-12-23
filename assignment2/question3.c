#include <stdio.h>
void greatest();
int main()
{
    greatest();
}
void greatest()
{
    int a = 10, b = 25, c = 15;

    if (a > b)
    {
        if (a > c)
            printf("Greatest = %d", a);
        else
            printf("Greatest = %d", c);
    }
    else
    {
        if (b > c)
            printf("Greatest = %d", b);
        else
            printf("Greatest = %d", c);
    }
}
