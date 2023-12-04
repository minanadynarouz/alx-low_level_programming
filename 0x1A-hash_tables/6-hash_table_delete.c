#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table you want to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *del_node;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		del_node = ht->array[i];
		free_array_list(del_node);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_array_list - func to free nodes
 * @h: node to free
 */

void free_array_list(hash_node_t *h)
{
	hash_node_t *current;
	hash_node_t *next;

	current = h;

	while (current != NULL)
	{
		next = current->next;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}
}
