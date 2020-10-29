#include "lists.h"
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
		cell->str = (strdup)str;
		cell->len = strlen(str);
		cell->next = NULL;

		*head = cell;
	}

	return (*head);
}
