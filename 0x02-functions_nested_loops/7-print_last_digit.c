#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @r: parameter
 *
 * Return: Always 0;
 */
int print_last_digit(int r)
{
	r = r % 10;
	if (r < 0)
		r = r * -1;
	_putchar('0' + r);
	return (r);
}
