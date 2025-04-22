#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the unsigned long integer to check
 * @index: index of the integer to retrieve
 *
 * Return: value of the bit (0 or 1), otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Checking if the index is out of bounds */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
