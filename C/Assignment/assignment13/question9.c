#include <stdio.h>

typedef struct
{
    float real, imaginary;
} Complex;

Complex store()
{
    Complex c;
    printf("Enter Real and Imaginary: ");
    scanf("%f %f", &c.real, &c.imaginary);
    return c;
}

void display(Complex c)
{
    printf("%.2f + %.2fi", c.real, c.imaginary);
}

void main()
{
    Complex c;
    c = store();
    display(c);
}
