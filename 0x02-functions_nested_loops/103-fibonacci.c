#include <stdio.h>

/**
 * main - Print even-valued fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, f = 0;
	unsigned long int sum = 2;
	int i = 0;

	while (f <= 4000000)
	{
		f = a + b;
		a = b;
		b = f;
		if ((f % 2) == 0)
			sum += f;
		i++;
	}
	printf("%lu\n", sum);
	return (0);
}
