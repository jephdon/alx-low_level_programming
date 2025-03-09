#include "main.h"

/**
 * _abs - Compute the absolute value of an integer
 *@n: parameter
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	int tmp = 0;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		tmp -= (n);
		return (tmp);
	}
}
