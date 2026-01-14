#include <stdio.h>

void avg();
int main()
{
    avg();
}

void avg()
{

    int a = 10, b = 20, c = 30, d = 40, e = 50;
    float avg = (a + b + c + d + e) / 5.0;

    printf("Average = %.2f", avg);
}
