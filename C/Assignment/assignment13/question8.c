#include <stdio.h>

typedef struct
{
    int feet, inch;
} Distance;

Distance store()
{
    Distance d;
    printf("Enter Feet Inch: ");
    scanf("%d %d", &d.feet, &d.inch);
    return d;
}

void display(Distance d)
{
    printf("%d feet %d inch", d.feet, d.inch);
}

void main()
{
    Distance d;
    d = store();
    display(d);
}
