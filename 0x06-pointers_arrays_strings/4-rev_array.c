#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: is a pointer
 * @n: number of elements of the array
 *
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
