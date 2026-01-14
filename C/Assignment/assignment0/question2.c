#include <stdio.h>
void area();
int main()
{

    printf("Area = %.2f", area());
}

void area()
{
    int r = 5;
    float pi = 3.14;
    float area = pi * r * r;
    return area;
}
