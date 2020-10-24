#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *sum_them_all - check code
 *@n: letter
 *@...: arguments
 *Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	int sum = 0;
	unsigned int i = 0;

	va_start(arguments, n);

	while (i < n)
	{
		sum += va_arg(arguments, int);
		i++;
	}
	va_end(arguments);

	return (sum);
}
