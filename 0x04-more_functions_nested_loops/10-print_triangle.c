#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: parameter
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k, tmp, tmp2;

	i = 0;
	tmp = size - 1;
	tmp2 = 1;
	if (size <= 0)
		_putchar('\n');
	while (i < size)
	{
		j = 0;
		while (j < tmp)
		{
			_putchar(' ');
			j++;
		}
		k = 0;
		while (k < tmp2)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		tmp--;
		tmp2++;
		i++;
	}
}
