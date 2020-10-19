#include <stdio.h>
#include "dog.h"
/**
 * init_dog - check code
 * @d: letter
 * @name : letter
 * @age : letter
 * @owner : letter
 *
 * Return: Void.
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
