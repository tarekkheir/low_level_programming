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
	int i;

	if (min > max)
	{
		return (NULL);
	}

	tab = malloc(sizeof(int) * (max + 1));
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
