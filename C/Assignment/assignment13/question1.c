#include <stdio.h>

typedef struct
{
    int rollNo;
    char name[50];
    float marks;
} Student;

Student store()
{
    Student s;
    printf("Enter Roll No, Name, Marks: ");
    scanf("%d %s %f", &s.rollNo, s.name, &s.marks);
    return s;
}

void display(Student s)
{
    printf("Roll=%d Name=%s Marks=%.2f", s.rollNo, s.name, s.marks);
}

void main()
{
    Student s;

    s = store();
    display(s);
}
