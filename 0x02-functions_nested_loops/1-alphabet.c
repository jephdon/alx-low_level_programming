#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
