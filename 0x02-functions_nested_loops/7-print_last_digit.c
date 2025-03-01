#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: parameter
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int ld = 0;

	if (n >= 0)
	{
		ld = n % 10;
		_putchar(ld + '0');
	}
	else
	{
		ld = -(n % 10);
		_putchar(ld + '0');
	}
	return (ld);
}
