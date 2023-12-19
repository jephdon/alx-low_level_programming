#include <stdio.h>

/**
 * main - while loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 0;
	j = 'a';
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while  (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
