#include "lists.h"
/**
 *pop_istint - delete node
 *@head: list
 *Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *act = *head;
	int tmp;

	tmp = act->n;
	*head = (*head)->next;
	free(act);
	return (tmp);
}
