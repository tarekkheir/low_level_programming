#include "holberton.h"
/**
 *_memset - check code
 *@s: letter
 *@b: letter
 *@n: letter
 *Return: value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	while ((unsigned int)j < n)
	{
		s[j] = b;
		j++;
	}
	return (s);
}
