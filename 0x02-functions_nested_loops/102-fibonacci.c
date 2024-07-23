#include <stdio.h>

/**
 * main - Print first 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1, b = 2;
	long int f = 0;
	int i = 2;

	printf("%d, %d", a, b);
	while (i < 50)
	{
		f = a + b;
		a = b;
		b = f;
		printf(", %ld", f);
		i++;
	}
	putchar('\n');
	return (0);
}
