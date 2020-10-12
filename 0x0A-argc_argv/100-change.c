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

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 2)
	{
		par = atoi(argv[1]);

		if (par < 0)
		{
			printf("0\n");
			return (0);
		}
		while (par > 0)
		{
			if (par >= 25)
			{
				par = par - 25;
			}
			else if (par >= 10)
			{
				par -= 10;
			}
			else if (par >= 5)
			{
				par -= 5;
			}
			else if (par >= 2)
			{
				par -= 2;
			}
			else if (par >= 1)
			{
				par -= 1;
			}
			res++;
		}
		printf("%d\n", res);
	}
	return (0);
}
