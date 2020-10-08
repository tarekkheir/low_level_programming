#include "holberton.h"
/**
 *cap_string - check code
 *@s: letter
 *Return: value
 */
char *cap_string(char *s)
{
	int a = 0;
	int x = 0;
	char chaine[] = ",;.!?\"(){}";

	while (s[x])
	{
		if (s[x] = chaine[a])
		{
			s[x + 1] = chaine[a];
			a++;
		}
		x++;
	}
	while (s[a] != '\0')
	{
		if (a == 0)
		{
			if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
			{
				s[a + 1] = s[a + 1] - 32;
			}
		}
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
