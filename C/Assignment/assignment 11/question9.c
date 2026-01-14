#include <stdio.h>
int main()
{
    char s1[100], s2[100];
    int i, len1 = 0, len2 = 0;

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    for (i = 0; s1[i] != '\0'; i++)
        len1++;
    for (i = 0; s2[i] != '\0'; i++)
        len2++;

    if (len1 > len2)
        printf("Larger String: %s", s1);
    else
        printf("Larger String: %s", s2);
}
