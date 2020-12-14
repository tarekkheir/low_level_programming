#include "lists.h"
/**
 *print_dlistint - print list arguments
 *@h: element to print
 *Return: value
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
