#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: parameter
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	if (n <= 0)
		_putchar('\n');
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		if (n > 0)
			_putchar('\\');
		_putchar('\n');
		i++;
	}
}
