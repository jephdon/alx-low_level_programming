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

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	p = malloc(sizeof(char) * len);
	if (len == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	while (j < len)
	{
		p[j] = str[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}
