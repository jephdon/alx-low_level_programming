#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int i = 0, j;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
			j++;
		}
		i++;
	}
}
