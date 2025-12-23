#include <stdio.h>

#include <stdio.h>

int checkEvenOdd();

int main()
{
    int result = checkEvenOdd();

    if (result == 0)
        printf("The number is even");
    else
        printf("The number is odd");

    return 0;
}

int checkEvenOdd()
{
    int a = 4;
    return (a % 2 == 0) ? 0 : 1;
}
