#include <stdio.h>

/**
 * main - while loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 'a';
	j = 'A';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
