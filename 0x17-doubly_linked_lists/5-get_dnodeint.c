#include "lists.h"

/**
 * get_dnodeint_at_index - func to get node at specific index.
 * @head: DLL
 * @index: Index to retreive its value
 * Return: the nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *result = malloc(sizeof(dlistint_t));
	if (result == NULL)
		return (NULL);

	i = 0;
	while (head != NULL)
	{
		i++;
		head = head->next;
		if (i == index)
		{
			return (head);
		}
	}
	return (NULL);
}
