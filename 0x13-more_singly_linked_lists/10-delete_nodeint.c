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
 *delete_nodeint_at_index - as the function said
 *@head: list
 *@index: index
 *Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *act = *head;
	unsigned int i = 0;

	if (index > listint_len(*head) || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(act);
		return (1);
	}
	while (i < index)
	{
		i++;
		tmp = act;
		act = act->next;
	}
	tmp->next = act->next;

	free(act);
	return (1);
}
