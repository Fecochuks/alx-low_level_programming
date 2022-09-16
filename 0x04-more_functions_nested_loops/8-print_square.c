#include <stdio.h>

/**
*print_square - prints squares.
*@size: parameter.
*char: use char '#' to print.
*Return: returns nothings.
*/

int print_square(void);

{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 0; inc1 < size; inc1++)
		{
			for (inc2 = 0; inc2 < (size - 1); inc2++)
			{
				_putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		_putchar('#');
	}
}
