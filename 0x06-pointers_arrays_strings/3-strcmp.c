#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0, +ve or -ve
 */
int _strcmp(char *s1, char *s2)
{
	int i, tmp = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			tmp = s1[i] - s2[i];
			break;
		}
	}
	return (tmp);
}
