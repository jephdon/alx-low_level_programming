#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 *
 * Return: pointer to c if found, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *temp = "NULL";

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			temp = &s[i];
			return (temp);
		}
		i++;
	}
	return (temp);
}
