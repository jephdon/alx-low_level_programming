#include <stdio.h>

/**
 * print_diagsums - Prints the sum of 2 diagonals of a square matrix
 * @a: pointer to square matrix
 * @size: size of matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;
	int dline1, dline2;

	if (size == '\0' || a == NULL)
		return;
	while (i < size)
	{
		dline1 = i * size + i;
		dline2 = i * size + (size - 1 - i);
		if (dline1 < size * size)
			sum1 += a[dline1];
		if (dline2 < size * size)
			sum2 += a[dline2];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
