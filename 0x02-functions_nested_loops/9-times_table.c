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
			_putchar('0' + b * a);

			if (b != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		_putchar('\n');
	}

}
