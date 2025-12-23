#include <stdio.h>
void studentDiscount() int main()
{
    studentDiscount();
}
void studentDiscount()
{
    float price = 800;
    char student = 'y';
    float discount = 0;

    if (student == 'y')
    {
        if (price > 500)
            discount = 0.20 * price;
        else
            discount = 0.10 * price;
    }
    else
    {
        if (price > 600)
            discount = 0.15 * price;
    }

    printf("Final Amount = %.2f", price - discount);
}
