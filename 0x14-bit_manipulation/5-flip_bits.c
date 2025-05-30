#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: numbers of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* XOR to find different bits */
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	/* Counts the number of bits in xor_result */
	while (xor_result > 0)
	{
		count++;

		/* Clear the least significant set bit */
		xor_result = xor_result & (xor_result - 1);
	}
	return (count);
}
