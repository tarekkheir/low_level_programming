#include "variadic_functions.h"
/**
 *print_numbers - check code
 *@separator: letter
 *@n: letter
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i = 0;

	va_start(numbers, n);

	while (i < n)
	{
		printf("%d", va_arg(numbers, int));
		i++;
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
