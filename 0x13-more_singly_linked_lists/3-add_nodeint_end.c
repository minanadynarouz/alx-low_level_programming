#include "lists.h"

/**
 * add_nodeint - add node to begining of list.
 * @head: pointing to start of list.
 * @n: element to be added.
 * Return: address of the new element, or
 * NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	const int item = n;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = item;
	new->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new;
		return (*head);
	}
	else
	{
		listint_t *temp = (*head);

		while ((temp)->next != NULL)
		{
			temp = (temp)->next;
		}
		(temp)->next = new;
	}
	return (*head);
}
