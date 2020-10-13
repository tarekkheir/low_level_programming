#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - check code
 *@size: letter
 *@c: letter
 *Return: value
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a = 0;

	array = malloc(sizeof(char) * size);
	if (size != 0)
	{
		while (a < size)
		{
			array[a] = c;
			a++;
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
