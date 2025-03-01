#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, multi = 0;

	while (i < 10)
	{
		_putchar(0 + '0');
		j = 1;
		while (j < 10)
		{
			multi = i * j;
			if (multi < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(multi / 10 + '0');
				_putchar(multi % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
