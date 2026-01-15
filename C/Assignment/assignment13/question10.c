#include <stdio.h>

typedef struct
{
    int id;
    char name[50];
    int quantity;
    float price;
} Product;

Product store()
{
    Product p;
    printf("Enter Id Name Quantity Price: ");
    scanf("%d %s %d %f", &p.id, p.name, &p.quantity, &p.price);
    return p;
}

void display(Product p)
{
    printf("%d %s %d %.2f", p.id, p.name, p.quantity, p.price);
}

void main()
{
    Product p;
    p = store();
    display(p);
}
