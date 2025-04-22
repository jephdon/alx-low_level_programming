#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: pointer to the unsigned long integer to check
 * @index: the index of the bit to clear
 *
 * Return: 1 if it worked, -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Create a mask with 0 at the specified index and 1s elsewhere */
	mask = ~(1UL << index);

	/* Clear the bit at the index */
	*n = *n & mask;
	return (1);
}
