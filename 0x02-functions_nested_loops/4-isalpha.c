#include <stdio.h>

/**
 * _isalpha - check for letters
 * @c: parameters
 *
 * Return: 1 if letters, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
