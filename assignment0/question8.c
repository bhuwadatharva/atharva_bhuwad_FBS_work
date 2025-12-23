#include <stdio.h>
void perimeter();
int main()
{
    perimeter();
}
void perimeter()
{
    int length = 10;
    int breadth = 5;
    int perimeter = 2 * (length + breadth);
    printf("Perimeter = %d", perimeter);
}
