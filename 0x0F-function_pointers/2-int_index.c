#include "function_pointers.h"
/**
 * int_index - check code
 * @array: letter
 * @size: letter
 * @cmp: letter
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);

			i++;
		}

	return (-1);
}
