#include "lists.h"

/**
 * insert_dnodeint_at_index - func to insert node at specific index.
 * @h: DLL
 * @idx: Index to insert value at.
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node;
	dlistint_t *current = *h;
	dlistint_t *pre_current = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*h == NULL)
	{
		*h = new_node;
		return (*h);
	}

	i = 0;
	while (current != NULL)
	{
		if (i == idx)
			break;
		pre_current = current;
		current = current->next;
		i++;
	}

	pre_current->next = new_node;
	new_node->prev = pre_current;
	new_node->next = current;

	if (current != NULL)
		current->prev = new_node;

	return (*h);
}
