#include "hash_tables.h"

/**
 * hash_table_get - return a value associated with a key.
 * @ht: the hash table to search
 * @key: the search key
 * Return: value['key'] if found, NULL if else
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index_key;
	const hash_node_t *new_node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index_key = key_index((const unsigned char *)key, ht->size);
	new_node = ht->array[index_key];

	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			return (new_node->value);
		}
		new_node = new_node->next;
	}
	return (NULL);
}
