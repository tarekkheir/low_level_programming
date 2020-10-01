#include "holberton.h"
/**
 *_strcmp - check code
 *@s1: letter
 *@s2: letter
 *Return: 1
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a] && s1[a] && s2[a] != '\0')
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
