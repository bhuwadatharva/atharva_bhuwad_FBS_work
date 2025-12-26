#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr[n1], brr[n2], crr[n1 + n2];

    printf("Enter first array elements:\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr[i]);

    printf("Enter second array elements:\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &brr[i]);

    for (int i = 0; i < n1; i++)
        crr[i] = arr[i];

    for (int i = 0; i < n2; i++)
        crr[n1 + i] = brr[i];

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", crr[i]);
}
