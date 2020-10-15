#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - check code
 *@b: letter
 *Return: value
 */
void *malloc_checked(unsigned int b)
{
	int *memory;

	if (b > 0)
	{
		memory = malloc(b);

		if (memory == NULL)
		{
			exit(98);
		}
	}
	return (memory);
}
