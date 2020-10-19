#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - check code
 * @d: letter
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: %p\n", d->name);
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->name == NULL)
		{
			printf("Owner: %p\n", d->owner);
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
