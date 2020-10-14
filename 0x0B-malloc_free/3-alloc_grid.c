#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - length of pointer
 *@width: letter that we use
 *@height: letter
 *Return: always 0
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int a = 0;
	int b = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	tab = malloc(sizeof(int *) * height);
	if (tab == NULL)
	{
		return (NULL);
	}

	while (a < height)
	{
		tab[a] = malloc(sizeof(int) * width);

		if (tab[a] == NULL)
		{
			return (NULL);
		}

		b = 0;

		while (b < width)
		{
			tab[a][b] = 0;
			b++;
		}
		a++;
	}
	return (tab);
}
