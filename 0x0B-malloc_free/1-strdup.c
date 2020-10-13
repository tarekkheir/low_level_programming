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
 *_strdup - check code
 *@str: letter
 *Return: value
 */
char *_strdup(char *str)
{
	char *string;
	int a, i = 0;

	if (str != NULL)
	{
		a = _strlen(str) + 1;
		string = malloc(sizeof(char) *(a));
		while (i < a)
		{
			string[i] = str[i];
			i++;
		}
		return (string);
	}
	else
	{
		return (NULL);
	}
}
