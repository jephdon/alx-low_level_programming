#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string between numbers
 * @n: number of arguments
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 1;
	va_list ap;

	if (n == 0)
		return;
	va_start(ap, n);
	printf("%d", va_arg(ap, int));
	while (i < n)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(ap, int));
			i++;
		}
		else
		{
			printf("%s%d", separator, va_arg(ap, int));
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
