#include "lists.h"
/*/**
 *listint_len - length of list
 *@h: list
 *Return: size
 *//*
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
	}*/
/**
 *insert_nodeint_at_index - read the name of function :)
 *@head: list
 *@idx: index
 *@n: node to insert
 *Return: list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	Cell *cell;
	listint_t *tmp = *head;
	unsigned int i = 0;

	if (idx == 0)
	{
		cell = malloc(sizeof(cell));
		if (cell == NULL)
			return (NULL);
		cell->n = n;
		cell->next = *head;
		*head = cell;

		return (cell);
	}
	i = 1;
	while (tmp)
	{
		if (i == idx)
		{
			cell = malloc(sizeof(cell));
			if (cell == NULL)
				return (NULL);
			cell->n = n;
			cell->next = tmp->next;
			tmp->next = cell;

			return (cell);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
