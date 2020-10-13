#include "holberton.h"
#include <stdlib.h>
/**
 *_strlen - length of pointer
 *@s: letter that we use
 *Return: always 0
 */
int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}
/**
 *str_concat - check code
 *
 *@s1: letter that we use
 *@s2: letter
 *Return: always 0
 */
char *str_concat(char *s1, char *s2)
{
	int size_s1, size_s2, size_total;
	int a = 0;
	int b = 0;
	char *res;

	size_s1 = _strlen(s1);
	size_s2 = _strlen(s2);
	size_total = size_s1 + size_s2;

	if (s1 != NULL && s2 != NULL)
	{
		res = malloc(sizeof(char) * size_total);

		while (b < size_total)
		{
			while (b < size_s1)
			{
				res[b] = s1[b];
				b++;
			}
			res[b] = s2[a];
			a++;
			b++;
		}
		return (res);
	}
	else
	{
		return (NULL);
	}
}
