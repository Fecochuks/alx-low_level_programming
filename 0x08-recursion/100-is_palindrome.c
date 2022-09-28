#include "main.h"

/**
 * length - size of string
 * @s: initial string
 * Return: length
 */
int length(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + length(s));
	}
	else
	{
		return (0);
	}
}
/**
 * comp - compare two chars
 * @s: string
 * @size: length of s
 * @inicio: variable to go through the string
 * Return: 1 or 0 if it's palindrome
 */
int comp(char *s, int size, int inicio)
{
	if (s[inicio] == s[size - 1 - inicio])
	{
		if (inicio <= (size / 2))
		{
			return (comp(s, length(s), inicio + 1));
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - gives if it is prime number
 * @s: number
 * Return: 1 if is palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	return (comp(s, length(s), 0));
}
