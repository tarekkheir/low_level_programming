#include "lists.h"
/**
 *print_listint - print the content of the list
 *@h: list
 *Return: size
 */
size_t print_listint(const listint_t *h)
{
	int result = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		result++;
	}
	return (result);
}
