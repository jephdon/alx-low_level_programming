#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: parameter
 * @b: parameter
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int old;

	old = *a;
	*a = *b;
	*b = old;
}
