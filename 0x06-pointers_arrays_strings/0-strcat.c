#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: second string
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i, dlen;

	dlen = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		dlen++;
		i++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dlen + i] = src[i];
	}
	dest[dlen + i] = '\0';
	return (dest);
}
