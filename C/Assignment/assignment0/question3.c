#include <stdio.h>

void temp();
int main()
{
	temp();
}
void temp()
{
	float celsius = 37.0;
	float fahrenheit = (celsius * 9 / 5) + 32;
	printf("Temperature in Fahrenheit = %.2f", fahrenheit);
}