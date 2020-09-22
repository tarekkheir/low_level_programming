#include "holberton.h"
/**
 * add - check code
 *
 *@a: letter that we use
 *@b: letter that we use
 *Return: always 0
 */
int add(int a, int b)
{
	int add;

	add = a + b;
	_putchar('0' + a + b);
	return (add);
}
