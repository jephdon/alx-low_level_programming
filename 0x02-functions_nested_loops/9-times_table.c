#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j, times;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			times = i * j;
			if (j == 0)
			{
				_putchar(times + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (times < 10)
				{
					_putchar(' ');
					_putchar(times + '0');
				}
				else
				{
					_putchar(times / 10 + '0');
					_putchar(times % 10 + '0');
				}
			}
			++j;
		}
		_putchar('\n');
		++i;
	}
}
