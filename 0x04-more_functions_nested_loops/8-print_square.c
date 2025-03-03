#include "main.h"

/**
 * print_square - Prints a square
 * @size: parameter
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	i = 0;
	if (size <= 0)
		_putchar('\n');
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
