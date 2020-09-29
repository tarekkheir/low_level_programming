#include "holberton.h"
/**
 *swap_int -check the code
 *@a: letter that we use
 *@b: letter that we use
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
