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
	int tmp = 0;
	int a = 0;
	int b = 0;

	if (argc < 2)
        {
                printf("0\n");
                return (1);
        }
	else if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			for (a = 0; argv[a][b]; b++)
			{
				if (argv[a][b] < '0' || argv[a][b] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			tmp += atoi(argv[a]);
		}
	}
	printf("%d\n", tmp);
	return (0);
}
