#include "lists.h"

/**
 * add_dnodeint - func to add node to the begining of DLL.
 * @head: DLL
 * @n: value data of Node
 * Return: address of new element or null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
