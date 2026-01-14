#include <stdio.h>
int main()
{
    char str[100], rev[100];
    int i, j = 0, len = 0;

    printf("Enter string: ");
    gets(str);

    while (str[len] != '\0')
        len++;

    for (i = len - 1; i >= 0; i--)
    {
        rev[j++] = str[i];
    }
    rev[j] = '\0';

    for (i = 0; i < len; i++)
    {
        if (str[i] != rev[i])
        {
            printf("Not Palindrome");
        }
    }

    printf("Palindrome");
}
