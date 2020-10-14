#include "holberton.h"
#include <stdlib.h>
/**
 *_strlen - check code
 *@s: letter
 *Return: value
 */
int _strlen(char *s)
{
	int size = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
 *argstostr - check code
 *@ac: letter
 *@av: letter
 *Return: value
 */
char *argstostr(int ac, char **av)
{
	int j = 0;
	int i = 0;
	int tmp = 0;
	int a = 0;
	char *tab;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (a < ac)
	{
		tmp += _strlen(av[a]) + 1;
		a++;
	}
	tmp++;
	tab = malloc(sizeof(char) * tmp);
	if (tab == NULL)
	{
		return (NULL);
	}

	a = 0;

	while (i < ac)
	{
		j = 0;
		while (j < _strlen(av[i]))
		{
			tab[a] = av[i][j];
			j++;
			a++;
		}
		tab[a] = '\n';
		i++;
		a++;
	}
	tab[a] = '\0';
	return (tab);
}
