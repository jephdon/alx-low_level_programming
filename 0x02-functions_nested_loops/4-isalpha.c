#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: parameter
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	int alpha = 'a';
	int ALPHA = 'A';

	while (alpha <= 'z')
	{
		if (c == alpha || c == ALPHA)
			return (1);
		alpha++;
		ALPHA++;
	}
	return (0);
}
