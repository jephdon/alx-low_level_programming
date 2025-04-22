#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary tp unsigned int
 * @b: pointer to 0 and 1
 *
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '1' || *b == '0')
		{
			result = result << 1;
			if (*b == '1')
				result += 1;
		}
		else
			return (0);
		b++;
	}
	return (result);
}
