#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			if (i <= 23)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			_putchar(':');
			if (j <= 59)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			_putchar('\n');
			++j;
		}
		++i;
	}
}
