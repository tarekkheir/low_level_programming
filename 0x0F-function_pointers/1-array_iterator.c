#include "function_pointers.h"
/**
 * array_iterator - check code
 * @array: letter
 * @size: letter
 * @action: letter
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action && size != 0)
		while (size != 0)
		{
			action(*(array));
			array++;
			size--;
		}
}
