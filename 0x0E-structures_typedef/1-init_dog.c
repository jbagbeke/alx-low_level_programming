#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Prototype
 * @d: pointer to struct dog
 * @name: name to be initialized
 * @age: Age to be initialized
 * @owner: Owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	typedef struct dog_t;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
