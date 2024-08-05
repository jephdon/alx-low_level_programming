#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length, i;
	char temp;

	/* Calculating the length of the string */
	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	/* Reversing the string */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
