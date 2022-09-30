#include <stdio.h>
#include "main.h"

/**
 *_puts - prints a string
 * @str: strng to print
 *
 * Description: prints a string
 * On succes: retruns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
