#include <stdio.h>

typedef struct
{
    int id;
    char name[50];
    float salary, incentive, target;
} SalesManager;

SalesManager store()
{
    SalesManager s;
    printf("Enter Id Name Salary Incentive Target: ");
    scanf("%d %s %f %f %f", &s.id, s.name, &s.salary, &s.incentive, &s.target);
    return s;
}

void display(SalesManager s)
{
    printf("%d %s %.2f %.2f %.2f", s.id, s.name, s.salary, s.incentive, s.target);
}

void main()
{
    SalesManager s;
    s = store();
    display(s);
}
