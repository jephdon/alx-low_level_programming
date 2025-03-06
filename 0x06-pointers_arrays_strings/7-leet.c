#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: parameter
 *
 * Return: result
 */
char *leet(char *a)
{
	char *arr = "aeotlAEOTL";
	char *code = "4307143071";
	int i = 0, j;

	while (a[i] != '\0')
	{
		j = 0;
		while (arr[j] != '\0')
		{
			if (a[i] == arr[j])
			{
				a[i] = code[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (a);
}
