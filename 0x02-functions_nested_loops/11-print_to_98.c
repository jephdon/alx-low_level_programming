#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints the natural numbers from n to 98
 * @n: parameter
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i = 0;

	if (n <= 98)
	{
		printf("%d", n);
		i = n + 1;
		while (i < 99)
		{
			printf(", %d", i);
			i++;
		}
	}
	else
	{
		printf("%d", n);
		i = n - 1;
		while (i > 97)
		{
			printf(", %d", i);
			i--;
		}
	}
	_putchar('\n');
}
