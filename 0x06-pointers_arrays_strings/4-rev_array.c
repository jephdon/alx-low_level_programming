#include "main.h"

/**
 * reverse_array - reverses an array of integer
 * @a: array of integers
 * @n: number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp = 0;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = tmp;
		i++;
	}
}
