#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: parameter
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, n;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	if (len % 2 != 0)
		n = (len - 1) / 2;
	else
		n = len / 2;
	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
