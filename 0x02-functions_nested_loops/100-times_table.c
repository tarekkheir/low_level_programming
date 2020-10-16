#include "holberton.h"
/**
 * print_times_table - check code
 *@n: letter
 * Return: Void
 **/
void print_times_table(int n)
{
	int i, j, a, b, c;

	if (n >= 0 && n <= 15)
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				c = (i * j) / 100;
				b = ((i * j) / 10) % 10;
				a = (i * j) % 10;
				if (i * j >= 100)
				{
					_putchar(' ');
					_putchar('0' + c);
					_putchar('0' + b);
					_putchar('0' + a);
				}
				else if (i * j >= 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + b);
					_putchar('0' + a);
				}
				else
				{
					if (j > 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + a);
				}
				if (j == n)
					_putchar('\n');
				else
					_putchar(',');
			}
		}
}
