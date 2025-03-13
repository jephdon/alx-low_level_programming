#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of char
 * @size: size of array
 * @c: content of array
 *
 * Return: a pointer (success), NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *p = malloc(sizeof(char) * size);

	i = 0;
	if (p == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < (int)size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
