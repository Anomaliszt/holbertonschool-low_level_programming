#include "dog.h"

/**
 * init_dog - init dog struct
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: nada
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
