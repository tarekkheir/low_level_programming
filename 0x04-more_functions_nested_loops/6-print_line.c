#include "holberton.h"
/**
 * print_line - check its an uppercase or not
 *
 *@n: letter that we use
 *Return: always 0
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar('_');
			a = a + 1;
		}
		_putchar('\n');
	}
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
}
