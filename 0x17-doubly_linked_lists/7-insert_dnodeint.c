#include "lists.h"

/**
 * add_node - add new node
 * @node: node to create
 * @n: value of node's n.
 */

dlistint_t * add_node(int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
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

	new_node = add_node(n);

        if (*h == NULL)
        {
                *h = new_node;
                return (*h);
        }

        if (idx == 0)
        {
                new_node->next = (*h)->next;
                *h = new_node;
                new_node->prev = *h;
                return (new_node);
        }
        i = 0;
    while (current != NULL)
        {
                current = current->next;
                i++;
        }
        if (idx > i)
        {
                return (NULL);
        }

        current = *h;
        i = 0;
        while (current != NULL)
        {
                if (i == idx - 1)
                        break;
                pre_current = current;
                current = current->next;
                i++;
        }
        if (current == NULL && i == idx - 1)
        {
                pre_current->next = new_node;
                new_node->prev = pre_current;
                new_node->next = NULL;
                return (new_node);
        }
        current = *h;

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
