#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: parameter
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, len;
	char temp;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	j = 0;
	i = len - 1;
	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i--;
		j++;
	}
}
