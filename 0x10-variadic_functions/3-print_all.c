#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints char types
 * @ap: parameter
 *
 * Return: nothing
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints int types
 * @ap: parameter
 *
 * Return: nothing
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints float types
 * @ap: parameter
 *
 * Return: nothing
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - print string types
 * @ap: parameter
 *
 * Return: nothing
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	printf("%s", s == NULL ? "(nil)" : s);
}

/**
 * print_all - prints anything
 * @format: parameter type variable
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	format_type printers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};
	va_list ap;
	const char *fmt = format;
	int i, first = 1;

	if (fmt == NULL || *fmt == '\0')
	{
		printf("\n");
		va_end(ap);
		return;
	}
	va_start(ap, format);
	while (*fmt)
	{
		i = 0;
		while (printers[i].type != 0)
		{
			if (*fmt == printers[i].type)
			{
				if (!first)
					printf(", ");
				printers[i].print_func(ap);
				first = 0;
				break;
			}
			i++;
		}
		fmt++;
	}
	va_end(ap);
	printf("\n");
}
