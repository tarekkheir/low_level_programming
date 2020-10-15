#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_realloc - check code
 *@ptr: letter
 *@old_size: letter
 *@new_size: letter
 *Return: value
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tab;

	if (new_size > old_size)
	{
		free(ptr);
		tab = malloc(sizeof(ptr) * new_size);
		if (tab == NULL)
			return (NULL);

		return (tab);
	}

	else if (new_size == old_size)
		return (ptr);

	else if (ptr == NULL)
	{
		tab = malloc(sizeof(ptr) * new_size);
		if (tab == NULL)
			return (NULL);

		return (tab);
	}

	else if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	else
		return (NULL);
}
