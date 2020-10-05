#include "holberton.h"
/**
 *_strspn - check code
 *@s: letter
 *@accept: letter
 *Return: value
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int a = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j] && i <= a)
				a = a + 1;
			j++;
		}
		i++;
	}
	return (a);
}
