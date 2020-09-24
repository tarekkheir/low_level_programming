#include "holberton.h"
/**
 * print_most_numbers - check its an uppercase or not
 *
 *Return: always 0
 */
void print_most_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		if (a == '2' || a == '4')
		{
			a = a + 1;
		}
		else
		{
			_putchar((char)a);
			a = a + 1;
		}
	}
	_putchar('\n');
}
