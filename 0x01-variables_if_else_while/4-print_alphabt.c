#include <stdio.h>

/**
 * main - while loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
