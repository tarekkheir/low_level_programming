#include "hash_tables.h"

/**
  * hash_table_print - print hash table
  * @ht: hash table
  * Returns: void
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0; 
    unsigned long int n = 1;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (n == 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			n = 0;
		}
		i++;
	}
	printf("}\n");
}
