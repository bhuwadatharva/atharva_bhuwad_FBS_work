#include <stdio.h>

typedef struct
{
    float real, imaginary;
} Complex;

void store(Complex *c)
{
    printf("Enter Real and Imaginary: ");
    scanf("%f %f", &c->real, &c->imaginary);
}

void display(Complex c)
{
    printf("%.2f + %.2fi", c.real, c.imaginary);
}

void main()
{
    Complex c;
    store(&c);
    display(c);
}
