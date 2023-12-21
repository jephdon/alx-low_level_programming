#include <stdio.h>

/**
 * main -  all possible combination of different two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i <= 7)
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
