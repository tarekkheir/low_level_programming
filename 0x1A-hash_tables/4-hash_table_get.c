#include "hash_tables.h"

/**
 * hash_table_get - add node to hash table
 * @ht: hash table
 * @key: key
 * Return: integer to success or fail
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *tmp = NULL;
    unsigned long int i = 0;

    if (key == NULL || strlen(key) == 0)
		return (NULL);
	if (ht == NULL)
		return (NULL);

    i = key_index((unsigned char *)key, ht->size);

    tmp = ht->array[i];

    while (tmp)
    {
        if (strcmp(tmp->key, key) == 0)
            return (tmp->value);
        tmp = tmp->next;
    }
    return (NULL);
}