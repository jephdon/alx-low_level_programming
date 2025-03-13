#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer (Success), NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		len2++;
		i++;
	}
	p = malloc(len1 + len2 + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		p[len1 + i] = s2[i];
		i++;
	}
	p[len1 + len2] = '\0';
	return (p);
}
