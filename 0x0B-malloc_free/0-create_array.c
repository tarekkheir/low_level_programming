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

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	while (a < size)
	{
		array[a] = c;
		a++;
	}
	return (array);
}
