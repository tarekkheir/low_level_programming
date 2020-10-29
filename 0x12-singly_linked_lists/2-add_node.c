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
 *add_node - add node in the linked list
 *@head: pointer of list
 *@str: string
 *Return: value
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *cell = malloc(sizeof(cell));

	if (cell == NULL)
		return (NULL);

	cell->str = strdup(str);
	cell->len = _strlen(str);
	cell->next = *head;

	*head = cell;
	return (*head);
}
