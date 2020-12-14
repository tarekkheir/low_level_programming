#include "lists.h"

/**
 *add_dnodeint - add node in the linked list
 *@head: pointer of list
 *@n: string
 *Return: value
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *cell = malloc(sizeof(cell));

	if (cell == NULL)
		return (NULL);

	cell->n = n;
	cell->prev = NULL;

	if (*head == NULL)
		cell->next = NULL;
	else
	{
		cell->next = *head;
		(*head)->prev = cell;
	}
	*head = cell;
	return (*head);
}
