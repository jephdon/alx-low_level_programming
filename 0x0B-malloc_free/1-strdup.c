#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a copy of a string
 * @str: string to copy
 *
 * Return: pointer (success), NULL otherwise
 */
char *_strdup(char *str)
{
	int i = 0, j = 0, len = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	while (j <= len)
	{
		p[j] = str[j];
		j++;
	}
	return (p);
}
