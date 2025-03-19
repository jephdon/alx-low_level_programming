#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: new pointer (success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *own_cpy;
	char *name_cpy;
	int own_len = 0, name_len = 0, i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		name_len++;
	for (i = 0; owner[i] != '\0'; i++)
		own_len++;
	name_cpy = malloc(sizeof(char) * name_len + 1);
	if (name_cpy == NULL)
	{
		free(name_cpy);
		return (NULL);
	}
	own_cpy = malloc(sizeof(char) * own_len + 1);
	if (own_cpy == NULL)
	{
		free(name_cpy);
		free(own_cpy);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		name_cpy[i] = name[i];
	name_cpy[name_len] = '\0';
	for (i = 0; i < own_len; i++)
		own_cpy[i] = owner[i];
	own_cpy[own_len] = '\0';
	d->name = name_cpy;
	d->age = age;
	d->owner = own_cpy;
	return (d);
}
