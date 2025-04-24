#include "main.h"

/**
 * _strlen - Returns the length of string
 * @s: parameters
 *
 * Return: value of s
 */
int _strlen(char *s)
{
	int i = 0, len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
