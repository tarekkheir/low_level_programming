#include "lists.h"
/**
 *listint_len - length of list
 *@h: list
 *Return: size
 */
size_t listint_len(const dlistint_t *h)
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
 *get_dnodeint_at_index - as the name of function said
 *@head: list
 *@index: index
 *Return: list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *result;
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
