#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * struct dog - dog stats
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

struct dog
{
    char *name;
    float age;
    char *owner;
};

#endif

