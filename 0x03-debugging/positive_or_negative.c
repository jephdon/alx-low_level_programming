#include <stdio.h>
/**
 * positive_or_negative - Test for positive or negative
 * @n: parameter
 *
 * Return: void
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
}
