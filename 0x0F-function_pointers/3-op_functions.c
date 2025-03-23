#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two intergers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of op_add
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - subtract one integer from another
 * @a: first integer
 * @b: second integer
 *
 * Return: result of op_sub
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of op_mul
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - divide two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of op_div, otherwise 100
 */
int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
 * op_mod - returns the remainder of two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: result of op_mod
 */
int op_mod(int a, int b)
{
	return ((a) % (b));
}
