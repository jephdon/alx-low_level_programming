#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: size in byte
 *
 * Return: pointer (success), NULL otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i = 0;
	size_t b = nmemb * size;
	void *p;
	char *temp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(b);
	if (p == NULL)
		return (NULL);
	temp = (char *)p;
	while (i < b)
	{
		temp[i] = 0;
		i++;
	}
	return (p);
}
