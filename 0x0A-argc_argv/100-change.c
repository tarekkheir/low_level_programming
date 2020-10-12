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
	int par, res;

	if (argc == 2)
	{
		par = atoi(argv[1]);

		while (par > 0)
		{
			if (par >= 25)
			{
				par -= 25;
			}

			if (par >= 10)
			{
				par -= 10;
			}
			if (par >= 5)
			{
				par -= 5;
			}
			if (par >= 2)
			{
				par -= 2;
			}
			if (par >= 1)
			{
				par -= 1;
			}
			res++;
		}

		printf("%d\n", res);
		return (0);

	}
	else
	{
		printf("0\n");
		return (1);
	}
}
