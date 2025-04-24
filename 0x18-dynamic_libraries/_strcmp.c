#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: parameter
 * @s2: parameter
 *
 * Return: result of the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
