#include "holberton.h"
/**
 *print_rev - check code
 *@s: letter that we use
 */
void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
	{
		rev++;
	}
	rev--;
	while (rev >= 0)
	{
		_putchar(s[rev]);
		rev--;
	}
}
