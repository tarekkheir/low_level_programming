#include "lists.h"
/**
 *listint_len - length of list
 *@h: list
 *Return: size
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
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

	if (index > listint_len(head))
		return (NULL);

	while (i < index)
	{
		i++;
		head = head->next;
	}

	result = head;
	return (result);
}
