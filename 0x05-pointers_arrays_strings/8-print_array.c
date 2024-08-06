#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: pointer to the array
 * @n: number of array elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (n - i == 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}
}
