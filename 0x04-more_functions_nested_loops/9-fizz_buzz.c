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
			printf("Fizz ");
		}

		else if ((a % 5) == 0 && (a % 3) != 0)
		{
			printf("Buzz ");
		}
		else if ((a % 15) == 0)
		{
			printf("FizzBuzz ");
		}

		else
		{
		printf("%d ", a);
		}

		a = a + 1;
	}

	printf("\n");
	return (0);
}
