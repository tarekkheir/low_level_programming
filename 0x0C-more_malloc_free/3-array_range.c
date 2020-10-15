#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *array_range - check code
 *@min: letter
 *@max: letter
 *Return: value
 */
int *array_range(int min, int max)
{
	int *tab;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
