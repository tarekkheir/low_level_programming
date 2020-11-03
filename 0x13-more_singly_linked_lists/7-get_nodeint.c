#include "lists.h"
/**
 *get_nodeint_at_index - as the name of function said
 *@head: list
 *@index: index
 *Return: list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *result;
	unsigned int i = 0;

	while (i < index)
	{
		i++;
		head = head->next;
	}

	result = head;
	return (result);
}
