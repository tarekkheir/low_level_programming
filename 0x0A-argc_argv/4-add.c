#include <stdio.h>
#include <stdlib.h>
/**
 *main - check code
 *@argc: letter
 *@argv: letter
 *Return: value
 */
int main(int argc, char *argv[])
{
	int tmp = 0;
	int a = 0;
	int b = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	a++;
	while (a < argc)
	{
		b = 1;
		while (argv[a][b])
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
			b++;
		}
		tmp += atoi(argv[a]);
		a++;
	}
	printf("%d\n", tmp);
	return (0);
}
