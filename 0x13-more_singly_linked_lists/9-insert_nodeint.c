#include "lists.h"
/**
 *insert_nodeint_at_index - read the name of function :)
 *@head: list
 *@idx: index
 *@n: node to insert
 *Return: list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	Cell *cell = malloc(sizeof(cell));
	listint_t *tmp = *head;
	listint_t *act = *head;
	unsigned int i = 0;

	cell->n = n;

	while (i < idx)
	{
		i++;
		tmp = act;
		act = act->next;
	}
	tmp->next = cell;
	cell->next = act;

	return (*head);
}
