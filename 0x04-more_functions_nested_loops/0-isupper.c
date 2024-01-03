#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: parameter
 *
 * Return: 1 if c is upper case, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
