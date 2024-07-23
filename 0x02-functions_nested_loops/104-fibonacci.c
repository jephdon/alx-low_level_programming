#include <stdio.h>

/**
 * main - print first 98 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, f = 0;
	int i = 2;

	printf("%lu, %lu", a, b);
	while (i < 98)
	{
		f = a + b;
		a = b;
		b = f;
		printf(", %lu", f);
		i++;
	}
	putchar('\n');
	return (0);
}
