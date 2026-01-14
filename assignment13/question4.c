#include <stdio.h>

typedef struct
{
    int id;
    char name[50];
    float salary, commission;
} HR;

void store(HR *h)
{
    printf("Enter Id Name Salary Commission: ");
    scanf("%d %s %f %f", &h->id, h->name, &h->salary, &h->commission);
}

void display(HR h)
{
    printf("%d %s %.2f %.2f", h.id, h.name, h.salary, h.commission);
}

void main()
{
    HR h;
    store(&h);
    display(h);
}
