#include <stdio.h>

/**
 * main - prints 1 to 100
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 2;

	putchar('0' + 1);
	while (i > 1 && i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
