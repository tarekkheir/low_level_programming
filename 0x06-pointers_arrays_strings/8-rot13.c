#include "holberton.h"
/**
 *rot13 - check code
 *@s: letter
 *Return: value
 */
char *rot13(char *s)
{
	char a[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int x = 0;
	int y = 0;

	while (s[x] != '\0')
	{
	while (s[x] != a[y])
	{
		y++;
	}
	if (y <= 51)
	{
		s[x] = b[y];
	}
	x++;
	}
	return (s);
}
