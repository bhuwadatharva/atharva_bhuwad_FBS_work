#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], brr[n], crr[n];

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &brr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        crr[i] = arr[i] + brr[i];
    }

    printf("Third array (Sum): ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", crr[i]);
    }
}
