#include "main.h"

/**
 * _pow_recursion - returns the value of raise to the power of y
 * @x: parameter
 * @y: parameter
 *
 * Return: result of x ^ y
 */
int _pow_recursion(int x, int y)
{
	int s = 0;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	s = x * _pow_recursion(x, y - 1);
	return (s);
}
