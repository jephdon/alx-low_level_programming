#include "main.h"

/**
 * _strpbrk - Searches a string gor any set of bytes
 * @s: string to scan
 * @accept: contains characters to look for
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (0);
}
