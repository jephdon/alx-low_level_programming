#include <stdio.h>

/**
 * main - all possible combination of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			if (i <= 98)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
			}
			putchar(' ');
			if (j <= 99)
			{
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
			}
			if (i < 98 && j < 100)
			{
				putchar(',');
				putchar(' ');
			}
			++j;
		}
		++i;
	}
	putchar('\n');
	return (0);
}
