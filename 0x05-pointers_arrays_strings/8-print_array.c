#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: parameter
 * @n: parameter
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
		i++;
	}
	printf("\n");
}
