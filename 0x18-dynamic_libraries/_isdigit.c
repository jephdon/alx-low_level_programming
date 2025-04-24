#include "main.h"

/**
 * _isdigit - checks for a digit from 0 through 9
 * @c: parameter
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		int i = '0';

		while (i <= '9')
		{
			if (c == i)
				return (1);
			i++;
		}
	}
	return (0);
}
