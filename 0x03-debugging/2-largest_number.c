#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: secind integer
 * @c: third integer
 * Return: Largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b && a > c) || (a == b && a > c) || (a > b && a == c))
	{
		largest = a;
	}
	else if ((b > a && b > c) || (b == c && b > a))
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	else
		largest = a;
	return (largest);
}
