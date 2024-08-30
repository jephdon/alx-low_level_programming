#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @ptr: pointer to string array
 *
 * Return: pointer
 */
char *string_toupper(char *ptr)
{
	int i;

	i = 0;
	while (ptr[i] != '\0')
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] = ptr[i] - 32;
		i++;
	}
	return (ptr);
}
