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
		if (str[puts] % 2 == 0)
		{
		_putchar(str[puts]);
		}
		puts++;
	}
	_putchar('\n');
}
