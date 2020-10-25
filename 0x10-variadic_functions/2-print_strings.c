#include "variadic_functions.h"
/**
 *print_strings - check code
 *@separator: letter
 *@n: letter
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0;
	char *str;

	va_start(strings, n);

	while (i < n)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		i++;
	}
	printf("\n");
	va_end(strings);
}
