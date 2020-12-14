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
 *delete_nodeint_at_index - as the function said
 *@head: list
 *@index: index
 *Return: integer
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	dlistint_t *act = *head;
	unsigned int i = 1;

	if (index > listint_len(*head) || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (act)
	{
		if (i == index)
		{
			tmp = act->next;
			if (tmp == NULL)
				return (-1);
			if (tmp->next)
				tmp->next->prev = act;
			act->next = tmp->next;
			free(tmp);
			return (1);
		}
		act = act->next;
		i++;
	}
	return (1);
}
