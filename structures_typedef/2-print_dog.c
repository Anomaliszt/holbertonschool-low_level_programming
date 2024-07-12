#include "dog.h"
#include <stddef.h>

/**
 * print_dog - print dog stats
 * @d: dog struct
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);

	if (d)
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
