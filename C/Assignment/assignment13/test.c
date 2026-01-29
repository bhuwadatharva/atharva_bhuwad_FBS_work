/// write a program to remove all occurences of a given character from a string
// firstbit -string
// output : frstbt
#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, j;
    printf("Enter a string:");
    scanf("%[^\n]s", str);
    printf("Enter a character to remove :");
    scanf(" %c", &ch);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            for (j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    printf("String after removing '%c': %s\n", ch, str);
}