#include "main.h"

/**
 * _strspn - gets the length of a prefix subsubstring
 * @s: string: string to scan
 * @accept: set of allowed characters
 *
 * Return: number of byte in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
			return ((unsigned int)count);
		i++;
	}
	return (0);
}
