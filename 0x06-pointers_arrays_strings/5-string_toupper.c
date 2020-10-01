#include "holberton.h"
/**
 *string_toupper - check code
 *@s: letter
 *Return: value
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] <= 'z' && s[a] >= 'a')
		{
			s[a] = s[a] - 32;
		}
		a++;
	}
	return  (s);
}
