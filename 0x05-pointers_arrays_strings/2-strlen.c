#include "holberton.h"
/**
 *_strlen - length of pointer
 *
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
