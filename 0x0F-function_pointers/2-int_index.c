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
	int idx;

	if (array && cmp && size != 0)
	{
		while (idx < size)
		{
			if (cmp(array[idx]))
				return (idx);

			idx++;
		}

	return (-1);
}
