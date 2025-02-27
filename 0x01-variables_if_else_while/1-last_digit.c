#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int n, ld, posld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		posld = ld;
		printf("Last digit of %d is %d and is greater than 5\n", n, posld);
	}
	else if (ld == 0)
	{
		posld = ld;
		printf("Last digit of %d is %d and is 0\n", n, posld);
	}
	else
	{
		posld = (ld < 0) ? -ld : ld;
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, posld);
	}
	return (0);
}
