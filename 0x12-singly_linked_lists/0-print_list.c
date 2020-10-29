#include "lists.h"
/**
 *printf_list - print list arguments
 *@h: element to print
 *Return: value
 */
size_t print_list(const list_t *h)
{
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (0);
}
