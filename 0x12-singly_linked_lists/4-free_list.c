#include "lists.h"
/**
 *free_list - free the list allocation
 *@head: list
 *Return: value
 */
void free_list(list_t *head)
{
	list_t *tmp = NULL;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
