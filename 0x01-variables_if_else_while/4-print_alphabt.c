#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		if (i == 'q' || i == 'e')
		{
			i++;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
