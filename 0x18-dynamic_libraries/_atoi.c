#include "main.h"

/**
 * _atoi - whatever
 * @s: parameter
 *
 * Return: 0 or 1
 */
int _atoi(char *s)
{
	int sum = 0, i = 0;

	while (s[i] != '\0')
	{
		sum++;
		i++;
	}
	return (sum);
}
