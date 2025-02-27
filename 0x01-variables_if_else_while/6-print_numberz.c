#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int sdigit = 0;

	while (sdigit <= 9)
	{
		putchar(sdigit + '0');
		sdigit++;
	}
	putchar('\n');
	return (0);
}
