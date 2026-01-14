#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    char str4[100] = "Hello World";
    char str5[100] = "HELLO";
    char str6[100] = "hello world";

    printf("Length of str1: %lu\n", strlen(str1));

    strcpy(str3, str1);
    printf("strcpy: %s\n", str3);

    strncpy(str3, str2, 3);
    str3[3] = '\0';
    printf("strncpy: %s\n", str3);

    strcat(str1, " ");
    printf("strcat: %s\n", str1);

    strncat(str1, str2, 3);
    printf("strncat: %s\n", str1);

    printf("strcmp: %d\n", strcmp("abc", "abd"));

    printf("strncmp: %d\n", strncmp("abcdef", "abcxyz", 3));

    printf("strchr: %s\n", strchr(str4, 'W'));

    printf("strrchr: %s\n", strrchr(str4, 'o'));

    printf("strstr: %s\n", strstr(str4, "World"));

    char temp[100];
    strcpy(temp, str4);
    char *token = strtok(temp, " ");
    printf("strtok:\n");
    while (token != NULL)
    {
        printf("  %s\n", token);
        token = strtok(NULL, " ");
    }

    memset(str3, '*', 5);
    str3[5] = '\0';
    printf("memset: %s\n", str3);

    memcpy(str3, str2, strlen(str2) + 1);
    printf("memcpy: %s\n", str3);

    memmove(str4 + 6, str4, 5);
    printf("memmove: %s\n", str4);

    printf("memcmp: %d\n", memcmp("abc", "abd", 3));

    strcpy(str3, str5);
    printf("Copied string: %s (len=%lu)\n", str3, strlen(str3));

    strcat(str3, " ");
    strcat(str3, str2);
    printf("Multiple strcat: %s\n", str3);

    printf("strcmp equal: %d\n", strcmp("test", "test"));

    printf("strchr not found: %p\n", strchr("hello", 'z'));

    char a[50] = "Hi";
    char b[50] = "Everyone";
    strncat(a, b, 4);
    printf("strncat limited: %s\n", a);

    memset(a, 0, sizeof(a));
    printf("memset clear: \"%s\"\n", a);

    return 0;
}
