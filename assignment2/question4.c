#include <stdio.h>
void result();
int main()
{
    result();
}
void result()
{
    int marks = 72;

    if (marks > 75)
        printf("Distinction");
    else if (marks > 65)
        printf("First Class");
    else if (marks > 55)
        printf("Second Class");
    else if (marks >= 40)
        printf("Pass Class");
    else
        printf("Fail");
}
