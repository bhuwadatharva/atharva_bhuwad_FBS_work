#include <stdio.h>

void addArrays(int *a, int *b, int *c, int n)
{
    for (int i = 0; i < n; i++)
        *(c + i) = *(a + i) + *(b + i);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {10, 20, 30, 40, 50};
    int c[5];

    addArrays(a, b, c, 5);

    for (int i = 0; i < 5; i++)
        printf("%d ", c[i]);

    return 0;
}
