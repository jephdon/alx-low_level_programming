#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all its parameters
 * @n: number if parameters
 *
 * Return: sum (success), 0 otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list ap;

	if (n == 0)
		return (0);
	i = 0;
	sum = 0;
	va_start(ap, n);
	while (i < (int)n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
