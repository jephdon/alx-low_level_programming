#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i = 0, j, m;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			m = i * j;
			if (j == 0)
				_putchar('0' + m);
			if (m < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + m);
			}
			else if (m > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
