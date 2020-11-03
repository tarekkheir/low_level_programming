#include "lists.h"
/**
 *free_listint2 - free the list
 *@head: list
 *Retrun: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
