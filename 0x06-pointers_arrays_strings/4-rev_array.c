#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 * @a: parameter
 * @n: parameter
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1;
	char temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
