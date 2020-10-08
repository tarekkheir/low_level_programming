#include "holberton.h"
/**
 *_strlen_recursion - check code
 *@s: letter
 *Return: value
 */
int _strlen_recursion(char *s)
{
	if (*s != 0)
	{
		printf("test : %c\n", *s);
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
	{
		return (0);
	}
}
