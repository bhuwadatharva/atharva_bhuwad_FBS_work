#include <stdio.h>
int main()
{
    char str[100], result[100];
    int i, j = 0;

    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("New String: %s", result);
}
