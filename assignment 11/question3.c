#include <stdio.h>
int main()
{
    char str[100];
    int i, n;

    printf("Enter string: ");
    gets(str);

    printf("Enter index: ");
    scanf("%d", &n);

    for (i = n; str[i] != '\0'; i++)
    {
        str[i] = str[i + 1];
    }

    printf("New String: %s", str);
}
