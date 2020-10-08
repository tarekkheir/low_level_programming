#include "holberton.h"
/**
 *puts_half - check code
 *@str: letter that we use
 */
void puts_half(char *str)
{
	int puts = 0;
	int half;

	while (str[puts] != '\0')
		puts++;

	if (puts % 2 != 0)
		half = (puts - 1) / 2;

	else
		half = puts / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
