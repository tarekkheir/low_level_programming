#include "variadic_functions.h"
/**
 *print_all - check code
 *@format: string that we print
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	int i = 0;
	char *vide = "";
	char *string = "";

	va_start(arguments, format);

	while (format && format[i] != 0)
	{
		switch (format[i])
		{
		case 'c':
			printf("%s", vide);
			printf("%c", va_arg(arguments, int));
			vide = ", ";
			break;
		case 'i':
			printf("%s", vide);
			printf("%i", va_arg(arguments, int));
			vide = ", ";
			break;
		case 'f':
                        printf("%s", vide);
			printf("%f", va_arg(arguments, double));
			vide = ", ";
			break;
		case 's':
			printf("%s", vide);
			string = va_arg(arguments, char *);
			if (string == NULL)
				string = "(nil)";
			printf("%s", string);
			vide = ", ";
			break;
		}
		i++;
	}
	va_end(arguments);
	printf("\n");
}
