#include "lists.h"
/**
 *free_list - free the list allocation
 *@head: list
 *Return: value
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
