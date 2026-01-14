#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i;
    int *a, *b, *c;

    printf("Enter size of A: ");
    scanf("%d", &n);
    printf("Enter size of B: ");
    scanf("%d", &m);

    a = (int *)malloc(n * sizeof(int));
    b = (int *)malloc(m * sizeof(int));
    c = (int *)malloc((n + m) * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n; i++)
        c[i] = a[i];
    for (i = 0; i < m; i++)
        c[n + i] = b[i];

    for (i = 0; i < n + m; i++)
        printf("%d ", c[i]);
}
