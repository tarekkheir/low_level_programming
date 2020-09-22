#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d = '0';

	while (a < b && b < c && c < d)
	{
	for (a = '0'; a <= '9'; a++)
	{
	for (b = '0'; b <= '9'; b++)
	{
	for (c = '0'; c <= '9'; c++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			putchar(a);
			putchar(b);
			putchar(' ');
			putchar(c);
			putchar(d);
			putchar(',');
			putchar(' ');

		}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
