#include "holberton.h"
/**
 * print_alphabet - display function
 **/
void print_alphabet(void)
{
	int a = 97;

	for (a = 97; a <= 122; a++)
	{
		_putchar((char)a);
	}
	_putchar('\n');
}
