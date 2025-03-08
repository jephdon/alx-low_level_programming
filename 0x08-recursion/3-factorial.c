#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: parameter
 *
 * Return: result
 */
int factorial(int n)
{
	int f = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (n);
	f = n * factorial(n - 1);
	return (f);
}
