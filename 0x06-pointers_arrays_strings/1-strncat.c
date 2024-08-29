#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: second string
 * @n: number of bytes of src
 *
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dlen;

	dlen = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		dlen++;
		i++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dlen + i] = src[i];
	}
	dest[dlen + i] = '\0';
	return (dest);
}
