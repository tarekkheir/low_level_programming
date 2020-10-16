#include "holberton.h"
/**
 * print_number - check code
 *@n: letter
 *Return: no
 */
void print_number(int n)
{
	int i;
	int j = 1;

	while (n / j >= 10 || n / j <= -10)
		j *= 10;

	while (j > 0)
	{
		i = n / j;
		if (i < 0)
		{
			_putchar('-');
			_putchar('0' - i);
			n = -(n - i * j);
		}
		else
		{
			_putchar('0' + i);
			n = n - i * j;
		}
		j /= 10;
	}

}
