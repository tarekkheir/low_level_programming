#include "holberton.h"
/**
 *strlen_palindrome - check code
 *@str: letter
 *Return: value
 */
int strlen_palindrome(char *str)
{
	if (*str)
	{
		str++;
		return (1 + strlen_palindrome(str));
	}
	else
	{
		return (0);
	}
}
/**
 *rev - check code
 *@a: letter
 *@n: letter
 *@i: letter
 *Return: value
 */
int rev(char *a, int n, int i)
{
	if (i > n)
	{
		return (1);
	}
	if (a[i] != a[n])
	{
		return (0);
	}
	n--;
	i++;
	return (rev(a, n, i));
}
/**
 *is_palindrome - check code
 *@s: letter
 *Return: value
 */
int is_palindrome(char *s)
{
	int size;

	size = strlen_palindrome(s) - 1;
	if (size == 0 || size == 1)
	{
		return (1);
	}
	return (rev(s, size, 0));
}
