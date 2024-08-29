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
	for (i = 0; dest[i] != '\0'; i++)
	{
		dlen++;
	}
	for (i = 0; src[i] <= '\0'; i++)
	{
		dest[dlen + i] = src[i];
	}
	return (dest);
}
