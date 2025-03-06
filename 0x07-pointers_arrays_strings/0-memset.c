#include "main.h"

/**
 * _memset - Fills memory with constant byte
 * @s: points to memory area
 * @b: constant byte
 * @n: n bytes of the memory
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < (int)n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
