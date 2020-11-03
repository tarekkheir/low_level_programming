#include "lists.h"
/**
 *add_nodeint - add node in the list
 *@head: list
 *@n: content of the node
 *Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	Cell *cell = malloc(sizeof(cell));
	listint_t *cur = *head;

	cell->n = n;
	cell->next = cur;
	*head = cell;

	return (*head);
}
