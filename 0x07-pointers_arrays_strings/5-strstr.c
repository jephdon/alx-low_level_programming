#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: string to be scanned
 * @needle: substring to be located
 *
 * Return: a pointer if substring found, NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j] == '\0')
				return (&haystack[i]);
			if (haystack[i + j] == '\0')
				return (0);
			j++;
		}
		i++;
	}
	return (0);
}
