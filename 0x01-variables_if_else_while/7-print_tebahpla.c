#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alwaus 0 (Success)
 */
int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
