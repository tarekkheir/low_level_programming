#include "holberton.h"
/**
 * print_alphabet_x10 - display function
 *
 * print_alphabet - display function
 *
 */
void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		print_alphabet();
	}
}
/**
 * print_alphabet - display function
 *
 */
void print_alphabet(void)

{

	int a = 97;



	for (a = 97; a <= 122; a++)

	{

		_putchar((char)a);

	}

	_putchar('\n');

}
