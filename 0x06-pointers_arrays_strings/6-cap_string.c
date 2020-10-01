#include "holberton.h"
/**
 *cap_string - check code
 *@s: letter
 *Return: value
 */
char *cap_string(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == ' ' || s[a] == '\n' || s[a] == '\t' || s[a] == '.')
		{
			if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
			{
				s[a + 1] = s[a + 1] - 32;
			}
		}
		else if (s[a] == ',' || s[a] == ';' || s[a] == '!')
		{
			if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
			{
				s[a + 1] = s[a + 1] - 32;
			}
		}
		else if (s[a] == '(' || s[a] == '{' || s[a] == '}' || s[a] == ')')
		{
			if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
			{
				s[a + 1] = s[a + 1] - 32;
			}
		}
		a++;
	}
	return (s);
}
