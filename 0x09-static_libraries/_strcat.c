#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: parameter
 * @src: parameter
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0, j = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	while (src[j] != '\0')
	{
		dest[len] = src[j];
		len++;
		j++;
	}
	dest[len] = '\0';
	return (dest);
}
