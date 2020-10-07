#include "holberton.h"
/**
 *factorial - check code
 *@n: letter
 *Return: value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
		return (n * factorial(n - 1));
}
