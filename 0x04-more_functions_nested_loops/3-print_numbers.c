#include "holberton.h"
/**
 * print_numbers - check its an uppercase or not
 *
 *Return: always 0
 */
void print_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		_putchar((char)a);
		_putchar('\n');
		a = a + 1;
	}
}
