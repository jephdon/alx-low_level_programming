#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *@r: parameter
 * Return: 0
 */
int _abs(int r)
{
	if (r == 0)
		return (0);
	else if (r < 0)
		return (r * -1);
	else
		return (r);
}
