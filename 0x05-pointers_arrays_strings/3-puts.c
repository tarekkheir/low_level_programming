#include "holberton.h"
/**
 *_puts - check the code
 *@str: letter that we use
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
}
