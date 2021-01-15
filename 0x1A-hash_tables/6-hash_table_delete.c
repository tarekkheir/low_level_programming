#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
    hash_node_t *next = NULL;
	unsigned int i;

	while (i < ht->size)
	{
		tmp = (ht->array)[i];
		while (tmp)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = next;
		}
        i++;
	}
	free(ht->array);
	free(ht);
}