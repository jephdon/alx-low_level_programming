#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Collects details of dogs
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: This struct tries to collect details on dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
