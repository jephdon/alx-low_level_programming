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
	free(d->name);
	free(d->owner);
	free(d);
}
