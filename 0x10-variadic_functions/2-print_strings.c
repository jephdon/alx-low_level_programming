#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string between strings
 * @n: number of string arguments
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 1;
	char *strp;
	va_list ap;

	va_start(ap, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	printf("%s", va_arg(ap, char *));
	while (i < n)
	{
		strp = va_arg(ap, char *);
		if (strp == NULL)
			strp = "(nil)";
		if (separator != NULL)
		{
			printf("%s%s", separator, strp);
			i++;
		}
		else
		{
			printf("%s", strp);
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
