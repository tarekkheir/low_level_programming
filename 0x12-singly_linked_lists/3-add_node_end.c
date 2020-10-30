#include "lists.h"
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
	list_t *act;

	if (cell == NULL)
		return (NULL);

	cell->str = strdup(str);
	cell->len = _strlen(str);
	cell->next = NULL;

	act = *head;

	if (*head)
	{
		while (act->next)
			act = act->next;

		act->next = cell;
	}
	else
		*head = cell;

	return (cell);
}
