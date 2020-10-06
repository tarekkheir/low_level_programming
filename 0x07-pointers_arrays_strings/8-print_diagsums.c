#include "holberton.h"
/**
 *print_diagsums - check code
 *@a: letter
 *@size: letter
 *Return: 0
 */
void print_diagsums(int *a, int size)
{
	int diag1 = 0;
	int diag2 = 0;
	int i = 0;
	int array;

	array = size * size;

	while (i < array)
	{
		diag1 += a[i];
		i += (size + 1);
	}
	printf("%d, ", diag1);
	i = size - 1;

	while (i < array - 1)
	{
		diag2 += a[i];
		i += (size - 1);
	}
	printf("%d\n", diag2);
}
