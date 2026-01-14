#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *a, *b, *c;

    printf("Enter size: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));
    b = (int *)malloc(n * sizeof(int));
    c = (int *)malloc(n * sizeof(int));

    printf("Enter array A:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter array B:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n; i++)
        c[i] = a[i] + b[i];

    printf("Sum Array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", c[i]);
}
