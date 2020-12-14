#include "lists.h"
/**
 *listint_len - length of list
 *@h: list
 *Return: size
 */
size_t listint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
/**
 *insert_nodeint_at_index - read the name of function :)
 *@head: list
 *@idx: index
 *@n: node to insert
 *Return: list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cell = NULL;
	dlistint_t *tmp = NULL;
	unsigned int i = 0;

	if (idx > listint_len(*h))
		return (NULL);
	if (idx == 0)
	{
		cell = malloc(sizeof(cell));
		if (cell == NULL)
			return (NULL);
		cell->n = n;
		cell->prev = NULL;
		cell->next = *h;
		*h = cell;

		return (cell);
	}
	i = 1;
	tmp = *h;
	while (tmp)
	{
		if (i == idx)
		{
			cell = malloc(sizeof(cell));
			if (cell == NULL)
				return (NULL);
			cell->n = n;
			cell->prev = tmp;
			cell->next = tmp->next;
			tmp->next = cell;

			return (cell);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
