#include <stdio.h>
void calculator();
int main()
{
    calculator();
}
void calculator()
{
    int a = 20, b = 5;
    char op = '*';

    if (op == '+')
        printf("Result = %d", a + b);
    else if (op == '-')
        printf("Result = %d", a - b);
    else if (op == '*')
        printf("Result = %d", a * b);
    else if (op == '/')
        printf("Result = %d", a / b);
    else if (op == '%')
        printf("Result = %d", a % b);
    else
        printf("Invalid operator");
}
