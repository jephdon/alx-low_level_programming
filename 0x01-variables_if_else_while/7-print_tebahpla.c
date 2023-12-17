#include <stdio.h>

/**
 * main - while loop
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
