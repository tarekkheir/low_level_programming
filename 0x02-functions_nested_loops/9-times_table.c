#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{

		for (b = 0; b <= 9; b++)
		{
			if ((b * a) / 10 != 0)
			{
			_putchar('0' + (b * a) / 10);
			}
			else
			{
				_putchar(' ');
			}
			_putchar('0' + (b * a) % 10);
			if (b < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
