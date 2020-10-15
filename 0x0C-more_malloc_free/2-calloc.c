#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - check code
 *@nmemb: letter
 *@size: letter
 *Return: value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tab;
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	tab = malloc(size * nmemb);
	if (tab == NULL)
	{
		return (NULL);
	}
	while (tab[i] != 0)
	{
		tab[i] = 0;
		i++;
	}

	return (tab);
}
