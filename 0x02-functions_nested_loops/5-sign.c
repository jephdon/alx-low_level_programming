#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints sign if a number
 * @n: parameter
 *
 * Return: 1 if positive, 0 if zero, -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0' + n);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
