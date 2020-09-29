#include "holberton.h"
/**
 *rev_string - check the code
 *@s: letter that we use
 */
void rev_string(char *s)
{
	int rev = 0;
	int x = 0;
	char tmp;

	while (s[rev])
	{
		rev++;
	}

	rev--;
	while (rev > x)
	{
		tmp = s[x];
		s[x] = s[rev];
		s[rev] = tmp;
		rev--;
		x++;
	}
}
