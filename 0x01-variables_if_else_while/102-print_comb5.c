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
	int d = 0, d2;
while (d <= 99)
	{
	d2 = d;
	while (d2 <= 99)
	{
	if (d2 != d)
	{
	putchar((d / 10) + 48);
	putchar((d % 10) + 48);
	putchar(' ');
	putchar((d2 / 10) + 48);
	putchar((d2 % 10) + 48);
	if (d != 98 || d2 != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	++d2;
	}
	++d;
	}
	putchar('\n');

	return (0);
}
