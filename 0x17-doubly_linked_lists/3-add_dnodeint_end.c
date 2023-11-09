#include "lists.h"

/**
 * add_dnodeint_end - func to add node to the end of DLL.
 * @head: DLL
 * @n: value data of Node
 * Return: address of new element or null if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *runner = *head;

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
		while (runner->next != NULL)
		{
			runner = runner->next;
		}
		runner->next = new;
		new->prev = runner;
	}
	return (new);
}
