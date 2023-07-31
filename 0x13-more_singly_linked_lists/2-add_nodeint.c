#include "lists.h"

/**
 * add_nodeint - add node to begining of list.
 * @head: pointing to start of list.
 * @n: element to be added.
 * Return: address of the new element, or 
 * NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	const int item = n;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = item;
	new->next = (*head);
	*head = new;
	return (*head);
}
