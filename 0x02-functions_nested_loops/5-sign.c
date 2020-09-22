#include "holberton.h"
/**
 * print_sign - check code
 *@n: letter that we test
 *
 *Return: always 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (0);
}
