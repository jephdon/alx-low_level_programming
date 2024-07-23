#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print the n times table
 * @n: parameter
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	int i = 0, j, m;

	while (i <= n && n > 0 && n < 16)
	{
		j = 0;
		while (j <= n)
		{
			m = i * j;
			if (j == 0)
				_putchar('0' + m);
			else if (j > 0 && m < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + m);
			}
			else if (m > 9 && m < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			else if (m > 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + m / 100);
				_putchar('0' + (m / 10) % 10);
				_putchar('0' + m % 10);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
