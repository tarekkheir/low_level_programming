#include "holberton.h"
#include <stdlib.h>
/**
 *_strlen - length of pointer
 *
 *@s: letter that we use
 *Return: always 0
 */
unsigned int _strlen(char *s)
{
	unsigned int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}
/**
 *string_nconcat - check code
 *@s1: letter
 *@s2: letter
 *@n: letter
 *Return: value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tab;
	unsigned int size_s1, size_s2, size_total, i, j;

	if (n >= _strlen(s2))
	{
		n = _strlen(s2);
	}
	else if (_strlen(s2) == 0)
	{
		n = 0;
	}

	size_s1 = _strlen(s1);
	size_s2 = n;
	size_total = size_s1 + size_s2 + 1;
	tab = malloc(sizeof(char) * size_total);

	if (tab == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size_s1)
	{
		tab[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size_total)
	{
		tab[i] = s2[j];
		i++;
		j++;
	}
	i--;
	tab[i] = '\0';
	return (tab);
}
