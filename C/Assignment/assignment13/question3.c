#include <stdio.h>

typedef struct
{
    int id;
    char name[50];
    float salary, allowance;
} Admin;

Admin store()
{
    Admin a;
    printf("Enter Id Name Salary Allowance: ");
    scanf("%d %s %f %f", &a.id, a.name, &a.salary, &a.allowance);
    return a;
}

void display(Admin a)
{
    printf("%d %s %.2f %.2f", a.id, a.name, a.salary, a.allowance);
}

void main()
{
    Admin a;

    a = store();
    display(a);
}
