#include "main.h"

/**
 * _strcpy - copy a string into a pointer
 * @dest: pointer
 * @src: array of string
 *
 * Return: pointer with all contents of the array
 */
char *_strcpy(char *dest, char *src)
{
	int i, length;

	/* Calculate the length of the string array */
	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	/* copy the contents of src to dest */
	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
