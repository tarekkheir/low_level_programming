#include "holberton.h"
/**
 *reverse_array - check code
 *@a: letter
 *@n: letter
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int x = 0;

	while (x <= n)
	{
		tmp = a[x];
		a[x] = a[n - 1];
		a[n - 1] = tmp;
		x++;
		n--;
	}
}
