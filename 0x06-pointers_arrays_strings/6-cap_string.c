#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: string to be modified
 *
 * Return: caps on first letter of a separator
 */

char *cap_string(char *str)
{
	int i, x;
	int cap = 32;
	int separators[] = {',', ';', '.', '?', '"',
		'(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - cap;
		}
		cap = 0;

		for (x = 0; x <= 12; x++)
		{
			if (str[i] == separators[x])
			{
				x = 12;
				cap = 32;
			}
		}
	}
	return (str);
}
