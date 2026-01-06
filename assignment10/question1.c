#include <stdio.h>

int mystrlen(const char *s)
{
    int len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}

char *mystrcpy(char *dest, const char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int mystrcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

char *mystrcat(char *dest, const char *src)
{
    int i = mystrlen(dest);
    int j = 0;
    while (src[j] != '\0')
    {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
    return dest;
}

char *mystrncpy(char *dest, const char *src, int n)
{
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}

void mystrupper(char *s)
{
    while (*s)
    {
        if (*s >= 'a' && *s <= 'z')
            *s = *s - 32;
        s++;
    }
}

void mystrlower(char *s)
{
    while (*s)
    {
        if (*s >= 'A' && *s <= 'Z')
            *s = *s + 32;
        s++;
    }
}

void mystrrev(char *s)
{
    int i = 0, j = mystrlen(s) - 1;
    char temp;
    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

char *mystrstr(const char *s, const char *sub)
{
    int i, j;
    for (i = 0; s[i]; i++)
    {
        for (j = 0; sub[j]; j++)
        {
            if (s[i + j] != sub[j])
                break;
        }
        if (sub[j] == '\0')
            return (char *)(s + i);
    }
    return NULL;
}

int mystrcasecmp(const char *s1, const char *s2)
{
    char c1, c2;
    while (*s1 && *s2)
    {
        c1 = (*s1 >= 'A' && *s1 <= 'Z') ? *s1 + 32 : *s1;
        c2 = (*s2 >= 'A' && *s2 <= 'Z') ? *s2 + 32 : *s2;
        if (c1 != c2)
            return c1 - c2;
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

char *mystrchr(const char *s, char ch)
{
    while (*s)
    {
        if (*s == ch)
            return (char *)s;
        s++;
    }
    return NULL;
}

char *mystrrchr(const char *s, char ch)
{
    char *last = NULL;
    while (*s)
    {
        if (*s == ch)
            last = (char *)s;
        s++;
    }
    return last;
}

int mystrncmp(const char *s1, const char *s2, int n)
{
    while (n-- && *s1 && *s2)
    {
        if (*s1 != *s2)
            return *s1 - *s2;
        s1++;
        s2++;
    }
    return 0;
}

char *mystrnstr(const char *s, const char *sub, int n)
{
    int i, j;
    for (i = 0; i <= n && s[i]; i++)
    {
        for (j = 0; sub[j] && (i + j) < n; j++)
        {
            if (s[i + j] != sub[j])
                break;
        }
        if (sub[j] == '\0')
            return (char *)(s + i);
    }
    return NULL;
}

char *mystrncat(char *dest, const char *src, int n)
{
    int i = mystrlen(dest);
    int j = 0;
    while (j < n && src[j])
    {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
    return dest;
}

int mystrncasecmp(const char *s1, const char *s2, int n)
{
    char c1, c2;
    while (n-- && *s1 && *s2)
    {
        c1 = (*s1 >= 'A' && *s1 <= 'Z') ? *s1 + 32 : *s1;
        c2 = (*s2 >= 'A' && *s2 <= 'Z') ? *s2 + 32 : *s2;
        if (c1 != c2)
            return c1 - c2;
        s1++;
        s2++;
    }
    return 0;
}
