#include <stdio.h>

void merge(int *a, int *b, int *c, int n)
{
    for (int i = 0; i < n; i++)
        *(c + i) = *(a + i);
    for (int i = 0; i < n; i++)
        *(c + n + i) = *(b + i);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {10, 20, 30, 40, 50};
    int c[10];

    merge(a, b, c, 5);

    for (int i = 0; i < 10; i++)
        printf("%d ", c[i]);

    return 0;
}
