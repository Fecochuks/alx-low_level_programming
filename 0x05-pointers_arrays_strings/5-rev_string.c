#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	char *t = s;

	{
		while (*t)
		t++;

		while (s < --t)
		{
		*s ^= *t;
		*t ^= *s;
		*s ^= *t;
		s++;
		}
	}
}
