#include "function_pointers.h"
/**
 * print_name - check code
 * @name: letter
 * @f: letter
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f != 0)
		f(name);
}
