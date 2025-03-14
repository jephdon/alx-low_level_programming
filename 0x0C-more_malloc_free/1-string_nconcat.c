#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2
 *
 * Return: pointer (success), NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, len1 = 0, len2 = 0;
	char *p;

	if (n == 0 || s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	while (s2[j] != '\0')
	{
		len2++;
		j++;
	}
	if ((int)n >= len2)
		n = len2;
	p = malloc(len1 + n + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < (int)n)
	{
		p[len1 + j] = s2[j];
		j++;
	}
	p[len1 + n] = '\0';
	return (p);
}
