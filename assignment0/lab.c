struct Employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct Employee e1, e2;

    printf("Enter details of Employee 1:\n");
    printf("ID: ");
    scanf("%d", &e1.id);
    printf("Name: ");
    scanf("%s", e1.name);
    printf("Salary: ");
    scanf("%f", &e1.salary);

    e2.id = 103;
    strcpy(e2.name, "Atharva");
    e2.salary = 30000;

    printf("\nEmployee 1 Details:\n");
    printf("ID: %d\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("Salary: %.2f\n", e1.salary);

    printf("\nEmployee 2 Details:\n");
    printf("ID: %d\n", e2.id);
    printf("Name: %s\n", e2.name);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}