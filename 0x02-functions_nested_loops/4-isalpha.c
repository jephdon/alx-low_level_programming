#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: parameter to be checked
 *
 * Return: 1 if character is a letter, otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
