#include "holberton.h"
/**
 *
 *
 */
void print_number(int n)
{
	int a;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
		_putchar('0' + a);
	}

	if ((n / 1000))
	{
		_putchar('0' + n / 1000);

	if ((n / 100))
	{
		_putchar('0' + n / 100);
	}

	if ((n / 10))
	{
		_putchar('0' + n / 10);
	}
	}

	_putchar('0' + n % 10);
}
