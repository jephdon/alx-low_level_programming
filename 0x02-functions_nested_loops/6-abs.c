#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @r: parameter to be checked
 *
 * Return: value of integer
 */
int _abs(int r)
{
	if (r < 0)
		return (-r);
	else
		return (r);
}
