#include "hash_tables.h"

/**
 * hash_table_create - create hashtable
 * @size: size of table
 * Return: new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_hash_table = malloc(sizeof(hash_node_t));
	
	if (new_hash_table == NULL)
		return (NULL);

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			new_hash_table->array[i] = NULL;
		}
		return (new_hash_table);
	}
	return (NULL);
}
