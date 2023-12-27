#include "main.h"

/**
 * print_alphabet - functions and nested loops
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
