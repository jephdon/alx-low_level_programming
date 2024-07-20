#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			if (i <= 98)
			{
				/**
				 * division and modulu are both used here
				 * to enable i be printed as a two digit
				 */
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
			}
			putchar(' ');
			if (j <= 99)
			{
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
			}
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
