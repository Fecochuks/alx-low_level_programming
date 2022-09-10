#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int d = 0, d2, d3;
while (d <= 9)
	{
	d2 = 0;
	while (d2 <= 9)
	{
	d3 = 0;
	while (d3 <= 9)
	{
	if (d != d2 && d < d2 && d2 != d3 && d2 < d3)
	{
	putchar(d + 48);
	putchar(d2 + 48);
	putchar(d3 + 48);
	if (d + d2 + d3 != 24)
	{
	putchar(',');
	putchar(' ');
	}
	}
	++d3;
	}
	++d2;
	}
	++d;
	}
	putchar('\n');

	return (0);
}
