#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: parameter to be checked
 *
 * Return: r
 */
int print_last_digit(int r)
{
	if (r < 0)
	{
		_putchar(-r % 10 + '0');
		return (r);
	}
	else
	{
		_putchar(r % 10 + '0');
		return (r);
	}
}
