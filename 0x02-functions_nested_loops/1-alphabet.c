#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
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
