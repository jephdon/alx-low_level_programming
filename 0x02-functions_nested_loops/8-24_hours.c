#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i = 0;

	while (i < 24)
	{
		int j = 0;

		while (j < 60)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
