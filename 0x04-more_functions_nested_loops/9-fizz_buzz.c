#include "holberton.h"
/**
 * main - check
 *
 *Return: always 0
 */
int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if ((a % 3) == 0 && (a % 5) != 0)
		{
			printf("Fizz");
			printf(" ");
		}

		else if ((a % 5) == 0 && (a % 3) != 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if ((a % 15) == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}

		else
		{
		printf("%d", a);
		printf(" ");
		}

		a = a + 1;
	}

	printf("\n");
	return (0);
}
