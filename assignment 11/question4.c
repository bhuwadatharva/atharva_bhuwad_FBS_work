#include <stdio.h>
int main()
{
    char str[100], temp;
    int i, len = 0;

    printf("Enter string: ");
    gets(str);

    while (str[len] != '\0')
        len++;

    temp = str[0];
    str[0] = str[len - 1];
    str[len - 1] = temp;

    printf("New String: %s", str);
}
