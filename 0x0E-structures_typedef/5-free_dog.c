#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated to the struct variable
 * @d: struct type parameter
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		free(d);
		return;
	}
	free(d->name);
	if (d->owner == NULL)
	{
		free(d);
		return;
	}
	free(d->owner);
	free(d);
}
