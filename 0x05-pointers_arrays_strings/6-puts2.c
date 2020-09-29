#include "holberton.h"
/**
 *puts2 -check code
 *@str: letter that we use
 */
void puts2(char *str)
{
	int puts = 0;

	while (str[puts])
	{
		_putchar(str[puts]);
		puts += 2;
	}
	_putchar('\n');
}
