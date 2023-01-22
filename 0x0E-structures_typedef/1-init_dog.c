#include <stdio.h>
#include "dog.h"

/**
 * Function - Initialises a variable of type struct dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner =owner;
}
