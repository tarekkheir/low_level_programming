#include "lists.h"
/**
 *list_len - Count the list lenght
 *@h: list
 *Return: value
 */
size_t list_len(const list_t *h)
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
 *_strlen - length of pointer
 *
 *@s: letter that we use
 *Return: always 0
 */
unsigned int _strlen(const char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}
/**
 *add_node_end - add node at the end of the list
 *@head: list
 *@str: string
 *Return: value
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cell = malloc(sizeof(cell));
	unsigned int last = list_len(*head);
	list_t *act = *head;
	list_t *prec = *head;
	unsigned int i = 0;

	printf("%u\n", last);
	if (last > 1)
	{
		printf("entrée dans if");
		while (i < last)
		{
			i++;
			prec = act;
			act = act->next;
		}
		prec->next = cell;
		cell->next = act;

	}
	else
	{
		cell->str = strdup(str);
		cell->len = _strlen(str);
		cell->next = NULL;

		*head = cell;
	}

	return (*head);
}
