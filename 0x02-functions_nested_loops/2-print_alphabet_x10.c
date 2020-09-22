#include "holberton.h"
/**
 * print_alphabet_x10 - display function
 **/
void print_alphabet_x10(void)
{
	int a, b;

	for (b = 0; b <= 10; b++)
	{
	for (a = 97; a <= 122; a++)
	{
		putchar((char)a);
	}
	putchar('\n');
	}
}
