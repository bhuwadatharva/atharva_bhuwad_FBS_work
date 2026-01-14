#include <stdio.h>

typedef struct
{
    int rollNo;
    char name[50];
    float marks;
} Student;

void store(Student *s)
{
    printf("Enter Roll No, Name, Marks: ");
    scanf("%d %s %f", &s->rollNo, s->name, &s->marks);
}

void display(Student s)
{
    printf("Roll=%d Name=%s Marks=%.2f", s.rollNo, s.name, s.marks);
}

void main()
{
    Student s;
    store(&s);
    display(s);
}
