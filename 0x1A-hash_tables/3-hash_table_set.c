#include "hash_tables.h"

/**
 * hash_table_set - set hash table with key and value
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: integer for success or fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new = NULL;
    hash_node_t *tmp = NULL;
    int i = 0;

    if (key == NULL || strlen(key) == 0)
        return (0);

    if (ht == NULL || value == NULL)
        return (0);

    i = key_index((unsigned char *)key, ht->size);

    tmp = ht->array[i];

    while (tmp)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            free(tmp->value);
            tmp->value = strdup(value);
            return (1);
        }
        tmp = tmp->next;
    }

    new = malloc(sizeof(hash_node_t *));
    if (new == NULL)
        return (0);

    tmp = ht->array[i];
    new->key = strdup(key);
    new->value = strdup(value);
    new->next = tmp;
    ht->array[i] = new;

    return (1);
}