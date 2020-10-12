#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 *main - check code
 *@argc: letter
 *@argv: letter
 *Return: value
 */
int main(int argc, char *argv[])
{
	int tmp;
	int a = 0;
	int b = 0;

	while (a < argc)
	{
		if (argv[a][b] < '0' || argv[a][b] > '9')
		{
			printf("Error\n");
			return (1);
		}

		if (argc > 1)
		{
			tmp += atoi(argv[a]);
		}
		a++;
		b++;
	}
	printf("%d\n", tmp);
	return (0);
}
