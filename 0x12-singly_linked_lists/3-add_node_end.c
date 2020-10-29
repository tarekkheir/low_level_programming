#include "lists.h"
unsigned int _strlen_list(list_t *list)
{
	int i = 0;

	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
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
	unsigned int last = _strlen_list(*head);
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
		cell->str = str;
		cell->len = strlen(str);
		cell->next = NULL;

		*head = cell;
	}

	return (*head);
}
