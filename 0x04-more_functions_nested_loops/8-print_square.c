#include <stdio.h>
#include "main.h"

/**
*print_square - prints size of square.
*@size: parameter of square.
*Return: returns nothings.
*/

void print_square(int size)

{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 1; inc1 <= size; inc1++)
		{
			putchar(' ');
		}
		for ((inc2 = size - inc1); inc2 > 0; inc2++)
		{
			putchar('#')
		}
		if (inc1 == size)
		{
			continue;
		}
		putchar('\n');
	}
	putchar('\n');
}
