#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index
 * @n: pointer to the unsigned long integer to check
 * @index: index of the bit to set
 *
 * Return: 1 if it worked, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Create a mask with 1 at the specified index */
	mask = 1UL << index;

	/* Set the bit a the index to 1 */
	*n = *n | mask;
	return (1);
}
