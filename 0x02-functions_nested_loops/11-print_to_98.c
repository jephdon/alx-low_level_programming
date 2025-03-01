#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: parameter
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i = 0;

	if (n >= 98)
	{
		printf("%d", n);
		i = n - 1;
		while (i > 97)
		{
			printf(", %d", i);
			i--;
		}
	}
	else
	{
		printf("%d", n);
		i = n + 1;
		while (i < 98)
		{
			printf(", %d", i);
			i++;
		}
	}
	_putchar('\n');
}
