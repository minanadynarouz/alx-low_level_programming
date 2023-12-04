#include "hash_tables.h"

/**
 * hash_table_print - prints hashtable
 * @ht: the hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	const hash_node_t *p_node;
	size_t i;
	int flag = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		p_node = ht->array[i];
		while (p_node != NULL)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", p_node->key, p_node->value);
			flag = 1;
			p_node = p_node->next;
		}
	}
    printf("}\n");
}
