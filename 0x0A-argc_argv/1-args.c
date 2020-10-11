#include <stdio.h>
/**
 *main - check code
 *@argc: letter
 *@argv: letter
 *Return: value
 */
int main(int argc, char *argv[])
{
	if (argv[0] == 0)
	{
		printf("0\n");
	}
	printf("%d\n", argc - 1);
	return (0);
}
