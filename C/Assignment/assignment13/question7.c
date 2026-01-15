#include <stdio.h>

typedef struct
{
    int hour, min, sec;
} Time;

Time store()
{
    Time t;
    printf("Enter Hour Min Sec: ");
    scanf("%d %d %d", &t.hour, &t.min, &t.sec);
    return t;
}

void display(Time t)
{
    printf("%d:%d:%d", t.hour, t.min, t.sec);
}

void main()
{
    Time t;
    t = store();
    display(t);
}
