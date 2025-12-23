#include <stdio.h>
void time();
int main()
{
    time();
}

void time()
{
    int hours = 2;
    int minutes = 30;
    int seconds = 45;

    printf("Time = %02d:%02d:%02d", hours, minutes, seconds);
}
