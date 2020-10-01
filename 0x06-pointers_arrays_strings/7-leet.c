#include "holberton.h"
/**
 *leet - chek code
 *@s: letter
 *Return: value
 */
char *leet(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == 'a' || s[a] == 'A')
		{
			s[a] = 52;
		}
		if (s[a] == 'e' || s[a] == 'E')
		{
			s[a] = 51;
		}
		if (s[a] == 'o' || s[a] == 'O')
		{
			s[a] = 48;
		}
		if (s[a] == 't' || s[a] == 'T')
		{
			s[a] = 55;
		}
		if (s[a] == 'l' || s[a] == 'L')
		{
			s[a] = 49;
		}
		a++;
	}
	return (s);
}
