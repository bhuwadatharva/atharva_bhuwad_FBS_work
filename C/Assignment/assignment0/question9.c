#include <stdio.h>
void areaTriangle();
int main()
{
    areaTriangle();
}
void areaTriangle()
{
    int base = 10;
    int height = 5;
    float area = 0.5 * base * height;
    printf("Area of Triangle = %.2f", area);
}
