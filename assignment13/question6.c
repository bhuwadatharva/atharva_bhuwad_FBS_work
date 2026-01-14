#include <stdio.h>

typedef struct
{
    int date, month, year;
} Date;

void store(Date *d)
{
    printf("Enter Date Month Year: ");
    scanf("%d %d %d", &d->date, &d->month, &d->year);
}

void display(Date d)
{
    printf("%d/%d/%d", d.date, d.month, d.year);
}

void main()
{
    Date d;
    store(&d);
    display(d);
}
