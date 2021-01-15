#include "hash_tables.h"

/**
  * hash_table_create - create an hash table
  * @size: size of the array
  * Return: new hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(ht));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));
    
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

	return (ht);
}
