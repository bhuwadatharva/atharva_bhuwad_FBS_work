#include <stdio.h>

typedef struct
{
    int id;
    char name[50];
    float salary;
} Employee;

void store(Employee *e)
{
    printf("Enter Id Name Salary: ");
    scanf("%d %s %f", &e->id, e->name, &e->salary);
}

void display(Employee e)
{
    printf("Id=%d Name=%s Salary=%.2f", e.id, e.name, e.salary);
}

void main()
{
    Employee e;
    store(&e);
    display(e);
}
