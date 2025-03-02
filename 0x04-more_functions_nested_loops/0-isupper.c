#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: parameter
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int i = 'A';

	while (i <= 'Z')
	{
		if (c == i)
			return (1);
		i++;
	}
	return (0);
}
