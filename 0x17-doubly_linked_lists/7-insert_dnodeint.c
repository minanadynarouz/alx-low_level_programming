#include "lists.h"

/**
 * dlistint_len - func to provide num of elements in DLL.
 * @h: DLL
 * Return: count of elements
 */

unsigned int dllist_len(dlistint_t *h)
{
	dlistint_t *head = h;
	size_t len = 0;

	while (head != NULL)
	{
		len++;
		head = head->next;
	}
	return (len);
}

/**
 * add_node - add new node
 * @node: node to create
 * @n: value of node's n.
 */

dlistint_t * add_node(dlistint_t **h,unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current = *h;
	dlistint_t *node;
	
	i = 0;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
        if (idx > i)
                return (NULL);

	node = malloc(sizeof(dlistint_t));
        if (node == NULL)
                return (NULL);
	
	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	return (node);
}

/**
 * insert_dnodeint_at_index - func to insert node at specific index.
 * @h: DLL
 * @idx: Index to insert value at.
 * @n: DLL data value
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
        unsigned int i;
        dlistint_t *new_node;
        dlistint_t *current = *h;
        dlistint_t *pre_current = *h;

	new_node = add_node(h, idx, n);
	if (new_node == NULL)
		return (NULL);

        if (*h == NULL)
        {
                *h = new_node;
                return (*h);
        }

        if (idx == 0)
		return (add_dnodeint(h, n));

	i = dllist_len(current);
	if (i == idx)
		return (add_dnodeint_end(h, n));

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
        return (new_node);
}
