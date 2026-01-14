#include <stdio.h>
void vowel();
int main()
{
    vowel();
}
void vowel()
{
    char ch = 'e';

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
}
