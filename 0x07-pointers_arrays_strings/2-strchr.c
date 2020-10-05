#include "holberton.h"
/**
 *_strchr - check code
 *@s: letter
 *@c: letter
 *Return: value
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *half;

	while (s[i])
	{
		if (s[i] == c)
		{
			half = &s[i];
			return (half);
		}
		i++;
	}
	if (s[i] == c)
	{
		half = &s[i];
	}
	return (half);
}
