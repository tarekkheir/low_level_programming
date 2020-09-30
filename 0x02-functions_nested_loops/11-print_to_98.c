#include "holberton.h"
/**
 * print_to_98 - check the code
 *@n: letter that we use
 *Return: always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 99; n++)
		{
		printf("%d", n);

		if (n < 98)
			printf(", ");
		if (n == 98)
			printf("\n");
		}

	}
	if (n == 99)
	n--;

	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n > 98)
				printf(", ");
			if (n == 98)
				printf("\n");
		}
	}
}
