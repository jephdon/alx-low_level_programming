#include <stdio.h>

/**
 * main - Print sum of all multiples of 3 and 5 below 1024
 *
 * Return: Always (0)
 */
int main(void)
{
	int i = 0, sum = 0;

	while (i < 1024)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
