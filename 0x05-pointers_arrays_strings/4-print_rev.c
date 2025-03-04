#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: parameter
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, len, len2;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	len2 = len - 1;
	while (len2 >= 0)
	{
		_putchar(s[len2]);
		len2--;
	}
	_putchar('\n');
}
