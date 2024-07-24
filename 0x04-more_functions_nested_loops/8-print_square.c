#include "main.h"

/**
 * print_square - Prints a square
 * @size: size of the square
 * Return: Always 0
 */
void print_square(int size)
{
	int i = 1, j;

	if (size > 0)
	{
		while (i <= size)
		{
			j = 1;
			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
