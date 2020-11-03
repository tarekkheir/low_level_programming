#include "lists.h"
/**
 *add_nodeint_end - add node at the end of the list
 *@head: list
 *@n: to add to list
 *Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	Cell *cell = malloc(sizeof(cell));
	listint_t *cur = *head;

	if (cell == NULL)
		return (NULL);

	cell->n = n;
	cell->next = NULL;

	if (*head == NULL)
	{
		*head = cell;
		return (*head);
	}
	while (cur->next)
		cur = cur->next;

	cur->next = cell;

	return (cur);
}
