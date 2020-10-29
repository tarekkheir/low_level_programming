#include "lists.h"
/**
 *print_list - print list arguments
 *@h: element to print
 *Return: value
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
