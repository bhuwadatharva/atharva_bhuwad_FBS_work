// #include <stdio.h>
// int main()
// {
//     int age = 45;

//     if (age < 12)
//         printf("Child");
//     else if (age <= 19)
//         printf("Teenager");
//     else if (age <= 59)
//         printf("Adult");
//     else
//         printf("Senior");
// }

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
