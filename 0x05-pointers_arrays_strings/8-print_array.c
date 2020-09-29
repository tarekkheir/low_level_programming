#include "holberton.h"
/**
 *print_array
 *@a: letter that we use
 *@n: letter that we use
 */
void print_array(int *a, int n)
{
	int rank = 0;

	while (rank < n)
	{
		printf("%d", a[rank]);
		if (rank < n - 1)
		{
			printf(", ");
		}
		rank++;
	}
	printf("\n");
}
