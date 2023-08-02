#include "lists.h"

/**
 * insert_nodeint_at_index - add item at specific
 * index location.
 * @head: double pointer to head pointer.
 * @idx: index where to place the new item.
 * @n: value of node to be inserted.
 * Return: pointer to head.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *run = *head;
	listint_t *new;
	unsigned int i;

	if (run == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; run != NULL && i < idx - 1; i++)
	{
		run = run->next;
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = run->next;
		run->next = new;
	}
	return (new);
}
