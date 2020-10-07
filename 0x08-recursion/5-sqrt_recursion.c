#include "holberton.h"
/**
 *sqrt_bis - check code
 *@nb: letter
 *@n_bis: letter
 *Return: value
 */
int sqrt_bis(int n_bis, int nb)
{
	if (nb < 0)
	{
		return (-1);
	}
	if (nb * nb == n_bis)
	{
		return (nb);
	}

	if (nb * nb > n_bis)
	{
		return (-1);
	}
	return (sqrt_bis(n_bis, nb + 1));
}
/**
 *_sqrt_recursion - check code
 *@n: letter
 *Return: value
 */
int _sqrt_recursion(int n)
{
	return (sqrt_bis(n, 0));
}
