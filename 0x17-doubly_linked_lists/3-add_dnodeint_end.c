#include "lists.h"

/**
 *add_dnodeint_end - add node at the end of the list
 *@head: list
 *@n: string
 *Return: value
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cell = malloc(sizeof(cell));
	dlistint_t *act;

	if (cell == NULL)
		return (NULL);

	cell->n = n;
	cell->next = NULL;

	act = *head;

	if (*head)
	{
		while (act->next)
			act = act->next;

		act->next = cell;
	}
	else
	{
		cell->prev = NULL;
		*head = cell;
		return (*head);
	}

	return (cell);
}
