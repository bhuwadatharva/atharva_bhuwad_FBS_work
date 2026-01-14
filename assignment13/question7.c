#include <stdio.h>

typedef struct
{
    int hour, min, sec;
} Time;

void store(Time *t)
{
    printf("Enter Hour Min Sec: ");
    scanf("%d %d %d", &t->hour, &t->min, &t->sec);
}

void display(Time t)
{
    printf("%d:%d:%d", t.hour, t.min, t.sec);
}

void main()
{
    Time t;
    store(&t);
    display(t);
}
