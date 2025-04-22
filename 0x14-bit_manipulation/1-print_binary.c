#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int flag = 0; /* tracks when we start printing to avoid leading zeroes */

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* starts mask at the highest bit (bit 63 for unsigned long int) */
	mask = 1UL << 63;
	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
		mask = mask >> 1; /* shifts mask right to check the next bit */
	}
}
