#include <stdio.h>

typedef struct
{
    int feet, inch;
} Distance;

void store(Distance *d)
{
    printf("Enter Feet Inch: ");
    scanf("%d %d", &d->feet, &d->inch);
}

void display(Distance d)
{
    printf("%d feet %d inch", d.feet, d.inch);
}

void main()
{
    Distance d;
    store(&d);
    display(d);
}
