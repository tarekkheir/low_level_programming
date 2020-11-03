#include "lists.h"
/**
 *listint_len - length of list
 *@h: list
 *return: size
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
