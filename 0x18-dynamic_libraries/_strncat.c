#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, len = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[len] = src[j];
		len++;
		j++;
	}
	dest[len] = '\0';
	return (dest);
}
