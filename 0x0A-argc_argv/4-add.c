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
	int a = 1;

	while (a < argc)
	{
		if (!atoi(argv[a]) || atoi(argv[a]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		if (atoi(argv[a]) >= 0)
		{
			tmp += atoi(argv[a]);
		}
		a++;
	}
	printf("%d\n", tmp);
	return (0);
}
