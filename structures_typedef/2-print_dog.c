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
	else
	{
		if (d->name == NULL)
			puts("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
