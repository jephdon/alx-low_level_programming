#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i < 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
