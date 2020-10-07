#include "holberton.h"
/**
 *prime_number - check code
 *@a: letter
 *@b: letter
 *Return: value
 */
int prime_number(int a, int b)
{
	if (a <= 1 || a % b == 0 || a % 2 == 0)
	{
		return (0);
	}

	if (b * b > a || a <= 3)
	{
		return (1);
	}

	return (prime_number(a, b + 2));
}

/**
 *is_prime_number - check code
 *@n: letter
 *Return: value
 */
int is_prime_number(int n)
{
	return (prime_number(n, 3));
}
