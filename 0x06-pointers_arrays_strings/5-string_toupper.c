#include "main.h"

/**
 * string_toupper- Changes lowercase to uppercase letters
 *@a: parameter
 *
 * Return: result
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		i++;
	}
	return (a);
}
