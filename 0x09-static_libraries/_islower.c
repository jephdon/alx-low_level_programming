#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: parameter
 *
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		if (c == alpha)
			return (1);
		alpha++;
	}
	return (0);
}
